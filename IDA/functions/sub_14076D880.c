#include "../winhttp.h"

//----- (000000014076D880) ----------------------------------------------------
__int64 __fastcall sub_14076D880(__int64 a1, int a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	__int64 v6; // rcx
	__int64* v7; // rax
	int v8; // edx
	__int64 v9; // rax
	int v10; // r8d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	__int64 v16[24]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v17; // [rsp+E0h] [rbp-28h]
	int* v18; // [rsp+F0h] [rbp-18h]

	sub_1400B7090((__int64)v16, 448885);
	v4 = 0i64;
	v18 = 0i64;
	v17 = 0i64;
	v16[0] = (__int64)off_140B69230;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v17 = v5;
	*((_QWORD*)&v17 + 1) = v5;
	v18 = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	sub_1400B7660(v16);
	switch (a2)
	{
	case 0:
		v6 = 0i64;
		if (qword_140C7DE20)
		{
			while (1)
			{
				v7 = *(__int64**)(qword_140C7DE18 + 8 * v6);
				if (*((_DWORD*)v7 + 4) == 5)
					break;
				if (++v6 >= (unsigned __int64)qword_140C7DE20)
					goto LABEL_22;
			}
			if (v7)
				v4 = *v7;
		}
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		v8 = 23;
		v9 = *(_QWORD*)(qword_140C65898 + 120);
		if (v9)
			v10 = *(_DWORD*)(v9 + 220);
		else
			v10 = 23;
		switch (a2)
		{
		case 1:
			v8 = 1;
			break;
		case 2:
			v8 = 2;
			break;
		case 3:
			v8 = 3;
			break;
		case 4:
			v8 = 4;
			break;
		case 5:
			v8 = 5;
			break;
		case 6:
			v8 = 7;
			break;
		default:
			break;
		}
		if (v10 == v8)
			goto LABEL_21;
		break;
	case 7:
	case 8:
	case 9:
	LABEL_21:
		v4 = *(_QWORD*)(qword_140C635F0 + 5792);
		break;
	default:
		break;
	}
LABEL_22:
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v13, L"strName", v14);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if ((_QWORD)v17)
		sub_14018B900(v17, 0);
	sub_1400B7390(v16);
	return v4;
}
// 14076DA0D: variable 'v12' is possibly undefined
// 14076DA30: variable 'v14' is possibly undefined
// 140B4EC20: using guessed type wchar_t aStrname_114[8];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

