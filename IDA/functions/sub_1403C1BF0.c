#include "../winhttp.h"

//----- (00000001403C1BF0) ----------------------------------------------------
__int64 __fastcall sub_1403C1BF0(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
	__int64 v6; // rdi
	__int64 result; // rax
	int* v11; // rax
	__int64 v12; // rbx
	int v13; // eax
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rcx
	__int64 v17; // rax

	v6 = a4;
	if (!a3)
		return 0i64;
	v11 = sub_14018B280(528i64, 0);
	if (v11)
		v12 = sub_1405C7150((__int64)v11, a3);
	else
		v12 = 0i64;
	switch (a3)
	{
	case 1:
		if (!a5)
			goto LABEL_39;
		v13 = sub_1405C7AD0(v12, v6, 0);
		goto LABEL_37;
	case 2:
		v13 = sub_1405C7A20(v12, v6);
		goto LABEL_37;
	case 3:
		if (v12)
			(**(void(__fastcall***)(__int64, __int64))v12)(v12, 1i64);
		if ((unsigned int)v6 >= 0x24)
			goto LABEL_41;
		return qword_140C89D80[v6];
	case 4:
		if (!a5)
			goto LABEL_39;
		v14 = sub_1403C1780(a1, v6);
		if (v14 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 112i64))(v14) == 27)
		{
			if (v12)
				(**(void(__fastcall***)(__int64, __int64))v12)(v12, 1i64);
			result = qword_140C89D80[0];
		}
		else
		{
		LABEL_36:
			v13 = sub_1405C79C0((__int64*)v12, v6);
		LABEL_37:
			if (v13 < 0)
			{
			LABEL_39:
				if (v12)
					(**(void(__fastcall***)(__int64, __int64))v12)(v12, 1i64);
			LABEL_41:
				result = 0i64;
			}
			else
			{
			LABEL_38:
				result = v12;
			}
		}
		break;
	case 6:
		if (!a5)
			goto LABEL_39;
		v15 = *(_DWORD*)(a5 + 4);
		v16 = qword_140C65898;
		*(_DWORD*)(v12 + 504) = a2;
		*(_DWORD*)(v12 + 508) = v15;
		if (!(_DWORD)v6)
			goto LABEL_38;
		if (!*(_QWORD*)(v16 + 120) || !v16 || (v17 = sub_1405A5B90(v16, v6)) == 0)
		{
			v17 = sub_1407A0FD0(qword_140C65B70, v6);
			if (!v17)
				goto LABEL_38;
		}
		sub_1405C7620((__int64*)v12, v17);
		result = v12;
		break;
	case 7:
		if (!a5)
			goto LABEL_41;
		v13 = sub_1405C8040(v12, *(_DWORD*)(a5 + 4), v6);
		goto LABEL_37;
	case 10:
		if (!a5)
			goto LABEL_39;
		v13 = sub_1405C7D00(v12, a2, *(_DWORD*)(a5 + 4), v6, a6);
		goto LABEL_37;
	case 11:
		if (!a5)
			goto LABEL_39;
		v13 = sub_1405C7DE0(v12, a2, *(_DWORD*)(a5 + 4), v6, a6);
		goto LABEL_37;
	case 12:
		if (!a5)
			goto LABEL_39;
		v13 = sub_1405C7F20((_DWORD*)v12, a2, *(_DWORD*)(a5 + 4), v6);
		goto LABEL_37;
	case 13:
		if (a5)
			goto LABEL_36;
		goto LABEL_39;
	default:
		goto LABEL_39;
	}
	return result;
}
// 1403C1DFE: conditional instruction was optimized away because edi.4<24u
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C89D80: using guessed type __int64 qword_140C89D80[];

