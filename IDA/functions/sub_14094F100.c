#include "../winhttp.h"

//----- (000000014094F100) ----------------------------------------------------
int sub_14094F100()
{
	int result; // eax

	result = (int)qword_140C7AA68;
	if (qword_140C7AA68)
		return CloseHandle(qword_140C7AA68);
	return result;
}

