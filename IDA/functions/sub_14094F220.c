#include "../winhttp.h"

//----- (000000014094F220) ----------------------------------------------------
int sub_14094F220()
{
	int result; // eax

	result = (int)qword_140C7AB98;
	if (qword_140C7AB98)
		return CloseHandle(qword_140C7AB98);
	return result;
}

