
      /*#######.
     ########",#:
   #########',##".
  ##'##'## .##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

#ifndef FT_TEST_FRAMEWORK_H
# define FT_TEST_FRAMEWORK_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>

# define COLOR_NORMAL	"\x1B[0m"
# define COLOR_RED		"\x1B[31m"
# define COLOR_GREEN	"\x1B[32m"
# define COLOR_YELLOW	"\x1B[33m"
# define COLOR_BLUE		"\x1B[34m"
# define COLOR_MAGENTA	"\x1B[35m"
# define COLOR_CYAN		"\x1B[36m"
# define COLOR_WHITE	"\x1B[37m"
# define COLOR_SLATE	"\x1B[30;01m"


struct
{
	const char		*describe;
	const char		*it;

	unsigned int	current_it_errors_count;
	unsigned int	failed_it_count;

}					_testing_state;


# define SUITE(name, block)													\
	void _test_suite_ ## name ()											\
	block																	\


# define TEST_SUITE(name) 													\
	void _test_suite_ ## name(); 											\
	printf("%sSuite%s %s:\n", COLOR_GREEN, COLOR_NORMAL, #name); 		\
	_test_suite_ ## name(); 												\
	printf("\n");															\



# define _PRINT_IT_RESULT(result, color)									\
	printf(" %s[%s]%s\n", COLOR_ ## color, result, COLOR_NORMAL);			\


# define IT(name, block)													\
{																			\
	pid_t	child_process;													\
	int		is_child_process;												\
	int		child_status;													\
																			\
	/* Print current name and flush to prevent re-print in child */			\
	printf("  %sIt %s%s",													\
		COLOR_SLATE, COLOR_NORMAL,											\
		name);																\
	fflush(stdout);															\
																			\
	child_process = fork();													\
	is_child_process = !child_process;										\
																			\
	/* Child process */														\
	if (is_child_process)													\
	{																		\
		block																\
		exit(_testing_state.current_it_errors_count);						\
	}																		\
	/* Parent process */													\
	else																	\
	{																		\
		/* Wait child to return */											\
		waitpid(child_process, &child_status, 0);							\
																			\
		/* Child exited */													\
		if (WIFEXITED(child_status))										\
		{																	\
			switch (WEXITSTATUS(child_status))								\
			{																\
				case 0:														\
					_PRINT_IT_RESULT("OK", GREEN)							\
					break;													\
				default:													\
					_PRINT_IT_RESULT("FAIL", RED)							\
			}																\
		}																	\
		/* Child was killed by signal */									\
		else if (WIFSIGNALED(child_status))									\
		{																	\
			switch (WTERMSIG(child_status))									\
			{																\
				case SIGSEGV:												\
					_PRINT_IT_RESULT("SIGSEV", RED)							\
					break;													\
			}																\
		}																	\
	}																		\
	_testing_state.it = NULL;												\
}																			\



# define DESCRIBE(name, block)												\
	printf("\n %sDescribe %s%s\n", COLOR_SLATE, COLOR_NORMAL, name);			\
	block																	\
	_testing_state.describe = NULL;											\


# define ASSERTION_FAIL()													\
	_testing_state.current_it_errors_count++;								\


# define ASSERT(assertion)													\
	if (!(assertion))														\
	{																		\
		printf("     %sExpected %s%s\n",									\
			COLOR_RED, #assertion, COLOR_NORMAL);							\
		ASSERTION_FAIL()													\
	}																		\



# define TEST_INIT()														\
	_testing_state.describe = NULL;											\
	_testing_state.it = NULL;												\
																			\
	_testing_state.failed_it_count = 0;										\
	_testing_state.current_it_errors_count = 0;								\


# define TEST_END()															\
	if (_testing_state.failed_it_count)										\
		printf("%s%d %s%s\n\n", COLOR_RED,									\
			_testing_state.failed_it_count,									\
			_testing_state.failed_it_count == 1 ? "error" : "errors",		\
			COLOR_NORMAL);													\
	else																	\
		printf("%sSuccess!%s\n\n", COLOR_GREEN, COLOR_NORMAL);				\



# define EXPECT_SIGNAL(signal, block)										\
	if (1 == 1)																\
	block																	\

#endif
