#include "../winhttp.h"

//----- (00000001403C8690) ----------------------------------------------------
__int64 __fastcall sub_1403C8690(__int64 a1)
{
	sub_140195D70(a1 + 26472);
	return Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "PendingWorldRemovalCancel", &unk_1409D0D62);
}

