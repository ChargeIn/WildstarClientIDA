#include "../winhttp.h"

//----- (00000001404D3990) ----------------------------------------------------
__int64 sub_1404D3990()
{
	__int64 v0; // rsi
	unsigned __int64 v1; // rdi
	int* v2; // rax
	int* v3; // rbx
	int* v4; // rax
	int* v5; // rax
	__int64 v6; // rax

	v0 = qword_140C65A40;
	v1 = 0i64;
	while (2)
	{
		switch ((int)v1)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			v2 = sub_14018B280(24i64, 0);
			v3 = v2;
			if (!v2)
				return 2147500037i64;
			v2[2] = 10;
			*(_QWORD*)v2 = off_140B690A0;
			goto LABEL_13;
		case 7:
			v4 = sub_14018B280(64i64, 0);
			v3 = v4;
			if (!v4)
				return 2147500037i64;
			v4[4] = 1;
			v4[5] = 14;
			*((_QWORD*)v4 + 3) = 10i64;
			goto LABEL_12;
		case 8:
			v4 = sub_14018B280(64i64, 0);
			v3 = v4;
			if (!v4)
				return 2147500037i64;
			*((_QWORD*)v4 + 3) = 11i64;
			goto LABEL_11;
		case 9:
			v4 = sub_14018B280(64i64, 0);
			v3 = v4;
			if (!v4)
				return 2147500037i64;
			v4[6] = 11;
			v4[7] = 1;
		LABEL_11:
			v4[5] = 15;
			v4[4] = 8;
		LABEL_12:
			v4[2] = 10;
			*(_QWORD*)v4 = off_140B69080;
			v5 = sub_14018B280(48i64, 0);
			*((_QWORD*)v3 + 5) = v5;
			*((_QWORD*)v3 + 6) = 0i64;
			*(_BYTE*)v5 = 0;
			*(_QWORD*)(*((_QWORD*)v3 + 5) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v3 + 5) + 16i64) = *((_QWORD*)v3 + 5);
			*(_QWORD*)(*((_QWORD*)v3 + 5) + 24i64) = *((_QWORD*)v3 + 5);
		LABEL_13:
			if (v3 && (*(int(__fastcall**)(int*, _QWORD))(*(_QWORD*)v3 + 8i64))(v3, (unsigned int)v1) >= 0)
			{
				v6 = (int)v1++;
				*(_QWORD*)(v0 + 8 * v6) = v3;
				if (v1 >= 0xA)
					return 0i64;
				continue;
			}
			return 2147500037i64;
		default:
			return 2147500037i64;
		}
	}
}
// 140B69080: using guessed type __int64 (__fastcall *off_140B69080[11])();
// 140B690A0: using guessed type __int64 (__fastcall *off_140B690A0[7])();
// 140C65A40: using guessed type __int64 qword_140C65A40;

