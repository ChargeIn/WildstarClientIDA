#include "../winhttp.h"

//----- (000000014094E800) ----------------------------------------------------
int sub_14094E800()
{
	int result; // eax

	result = (int)qword_140C7A028;
	if (qword_140C7A028)
		return CloseHandle(qword_140C7A028);
	return result;
}

