#include "../winhttp.h"

//----- (0000000140829BD0) ----------------------------------------------------
void __fastcall sub_140829BD0(struct _RTL_CRITICAL_SECTION* a1)
{
	DeleteCriticalSection(a1 + 3);
}

