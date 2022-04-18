#include "../winhttp.h"

//----- (00000001405FAB30) ----------------------------------------------------
__int64 __fastcall sub_1405FAB30(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	unsigned __int64 v3; // rcx
	__int64* v4; // rbx
	__int16* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rsi
	unsigned __int64 v8; // rdx
	__int64 v9; // rax
	__int64* v10; // r8
	__int64* v11; // rcx
	__int64 result; // rax
	__int64 v13; // rcx

	v2 = *(_DWORD*)(a2 + 8);
	v3 = (__int64)(*(_QWORD*)(qword_140C65898 + 30056) - *(_QWORD*)(qword_140C65898 + 30048)) >> 3;
	v4 = *(__int64**)(*(_QWORD*)(qword_140C65898 + 30048) + 8 * (v2 % v3));
	if (v4)
	{
		do
		{
			if (*((_DWORD*)v4 + 2) == v2)
				break;
			v4 = (__int64*)*v4;
		} while (v4);
		if (v4)
		{
			v5 = sub_14034BDD0(v3, *(_DWORD*)(a2 + 16));
			v6 = v4[2];
			if (v5 == (__int16*)v6)
			{
				sub_14018B900(v6, 0);
				v7 = qword_140C65898;
				v8 = *((unsigned int*)v4 + 2)
					% (unsigned __int64)((__int64)(*(_QWORD*)(qword_140C65898 + 30056) - *(_QWORD*)(qword_140C65898 + 30048)) >> 3);
				v9 = *(_QWORD*)(qword_140C65898 + 30048);
				v10 = *(__int64**)(v9 + 8 * v8);
				if (v10 == v4)
				{
					*(_QWORD*)(v9 + 8 * v8) = *v10;
					v11 = v10;
				LABEL_13:
					sub_14018B900((__int64)v11, 0);
					--* (_QWORD*)(v7 + 30072);
					goto LABEL_14;
				}
				v11 = (__int64*)*v10;
				if (*v10)
				{
					while (v11 != v4)
					{
						v10 = v11;
						v11 = (__int64*)*v11;
						if (!v11)
							goto LABEL_14;
					}
					*v10 = *v11;
					goto LABEL_13;
				}
			}
		}
	}
LABEL_14:
	result = sub_14024DB80(v2);
	if (result)
	{
		result = (__int64)sub_14034BDD0(v13, *(_DWORD*)(result + 4));
		if (v2)
		{
			if (result)
				return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "SubZoneChanged", byte_1409ECB14, v2, result);
		}
	}
	return result;
}
// 1405FAC34: variable 'v13' is possibly undefined
// 1409ECB14: using guessed type _BYTE byte_1409ECB14[4];
// 140C65898: using guessed type __int64 qword_140C65898;

