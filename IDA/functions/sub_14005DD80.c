#include "../winhttp.h"

//----- (000000014005DD80) ----------------------------------------------------
void __fastcall sub_14005DD80(__int64 a1)
{
	__int64 v1; // r10
	__int64* v2; // r9
	__int64 v3; // r11
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rax

	v1 = a1;
	v2 = (__int64*)(a1 + 224);
	v3 = 9i64;
	do
	{
		v4 = *v2;
		if (*v2 && (*(_BYTE*)(v4 + 9) & 3) != 0)
		{
			*(_BYTE*)(v4 + 9) &= 0xFCu;
			switch (*(_BYTE*)(v4 + 8))
			{
			case 5:
				*(_QWORD*)(v4 + 48) = *(_QWORD*)(v1 + 56);
				goto LABEL_19;
			case 6:
				*(_QWORD*)(v4 + 16) = *(_QWORD*)(v1 + 56);
				goto LABEL_19;
			case 7:
				v5 = *(_QWORD*)(v4 + 16);
				*(_BYTE*)(v4 + 9) |= 4u;
				if (v5 && (*(_BYTE*)(v5 + 9) & 3) != 0)
					sub_14005C960(v1, v5);
				v6 = *(_QWORD*)(v4 + 24);
				if ((*(_BYTE*)(v6 + 9) & 3) != 0)
					sub_14005C960(v1, v6);
				break;
			case 8:
				*(_QWORD*)(v4 + 160) = *(_QWORD*)(v1 + 56);
				goto LABEL_19;
			case 9:
				*(_QWORD*)(v4 + 104) = *(_QWORD*)(v1 + 56);
			LABEL_19:
				*(_QWORD*)(v1 + 56) = v4;
				break;
			case 0xA:
				v7 = *(_QWORD*)(v4 + 16);
				if (*(int*)(v7 + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)v7 + 9i64) & 3) != 0)
					sub_14005C960(v1, *(_QWORD*)v7);
				if (*(_QWORD*)(v4 + 16) == v4 + 24)
					*(_BYTE*)(v4 + 9) |= 4u;
				break;
			default:
				break;
			}
		}
		++v2;
		--v3;
	} while (v3);
}
// 14005DDFB: variable 'v1' is possibly undefined
// 14005DE00: variable 'v4' is possibly undefined
// 14005DE6D: variable 'v2' is possibly undefined
// 14005DE71: variable 'v3' is possibly undefined

