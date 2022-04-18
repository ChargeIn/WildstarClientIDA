#include "../winhttp.h"

//----- (0000000140572670) ----------------------------------------------------
_DWORD* __fastcall sub_140572670(__int64 a1, unsigned int* a2)
{
	_DWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	result = (_DWORD*)sub_1404804A0(qword_140C65970, *a2, 18);
	v3 = result;
	if (result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)result + 40i64))(result);
		if ((_DWORD)result)
		{
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, __int64))(*v3 + 128i64))(v3, 1347241296i64);
			if (result)
			{
				v4 = qword_140C65898;
				result[9] = 0;
				return (_DWORD*)Apollo_LUAEvent(
					*(_QWORD*)(v4 + 29504),
					"PlayerPathExplorerPowerMapExited",
					byte_1409ED34C,
					v3[6]);
			}
		}
	}
	return result;
}
// 1409ED34C: using guessed type _BYTE byte_1409ED34C[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

