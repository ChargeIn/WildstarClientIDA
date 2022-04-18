#include "../winhttp.h"

//----- (00000001405724B0) ----------------------------------------------------
__int64 __fastcall sub_1405724B0(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	_QWORD* v3; // rbx
	int v4; // ecx
	__int64 v5; // rax

	result = sub_1404804A0(qword_140C65970, *a2, 18);
	v3 = (_QWORD*)result;
	if (result)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 40i64))(result);
		if ((_DWORD)result)
		{
			result = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v3 + 128i64))(v3, 1347241296i64);
			if (result)
			{
				*(_DWORD*)(result + 32) = 1;
				v4 = *(_DWORD*)(*(_QWORD*)(result + 16) + 12i64);
				if (!v4)
				{
					v5 = sub_140200220(0x1F0u);
					if (v5)
						v4 = *(_DWORD*)(v5 + 4);
					else
						v4 = 0;
				}
				return Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"PlayerPathExplorerPowerMapWaiting",
					byte_1409ED39C,
					v3[6],
					v4);
			}
		}
	}
	return result;
}
// 1409ED39C: using guessed type _BYTE byte_1409ED39C[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

