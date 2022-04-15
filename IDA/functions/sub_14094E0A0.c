#include "../winhttp.h"

//----- (000000014094E0A0) ----------------------------------------------------
int sub_14094E0A0()
{
	int result; // eax

	result = (int)qword_140C79B68;
	if (qword_140C79B68)
		return CloseHandle(qword_140C79B68);
	return result;
}

