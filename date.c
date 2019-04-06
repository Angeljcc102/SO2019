#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *args[])
{
	struct rtcdate r;
	date(&r);
	exit();
}