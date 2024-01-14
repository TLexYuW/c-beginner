#include <sys/select.h>
#include <sys/poll.h>

/*
int select(int, fd_set * __restrict, fd_set * __restrict,
	fd_set * __restrict, struct timeval * __restrict)
*/

/*
struct pollfd {
	int     fd;
	short   events;
	short   revents;
};
int poll(struct pollfd *, nfds_t, int)
*/
