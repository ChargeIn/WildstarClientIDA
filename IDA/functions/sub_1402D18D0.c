#include "../winhttp.h"

//----- (00000001402D18D0) ----------------------------------------------------
void __fastcall sub_1402D18D0(__int64* a1, _DWORD* a2, unsigned __int64 a3, __int64 a4)
{
	__int64 v7; // r8
	__int64 v9; // rbp
	__int64 v10; // rbx
	unsigned __int64 v11; // r15
	__int64 v12; // rbx
	_DWORD* v13; // rdx
	unsigned __int64 v14; // r14
	unsigned __int64 i; // rdi
	int v16; // edi
	int v17; // esi
	char* v18; // rbx
	__int64 v19; // rcx
	char* v20; // rbx
	__int64 v21; // rcx
	__int64* v22; // rax
	__int64 v23; // r15
	int* v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rdi
	__int64 v28; // rcx
	unsigned __int64 v29; // [rsp+30h] [rbp-118h] BYREF
	unsigned __int64 v30; // [rsp+38h] [rbp-110h] BYREF
	char v31[72]; // [rsp+40h] [rbp-108h] BYREF
	char v32; // [rsp+88h] [rbp-C0h] BYREF
	char v33; // [rsp+A8h] [rbp-A0h] BYREF

	if (a3)
	{
		v30 = a3;
		v7 = a1[2];
		if ((a1[3] - v7) / 192 < a3)
		{
			v22 = (__int64*)&v30;
			v29 = (v7 - a1[1]) / 192;
			if (v29 >= a3)
				v22 = (__int64*)&v29;
			v23 = 48 * (sub_14018A3E0(192 * (v29 + *v22)) / 0xC0ui64);
			v24 = sub_14018B280(v23 * 4, 0);
			v25 = sub_1402D1C80(a1[1], (__int64)a2, (__int64)v24);
			v26 = sub_1402D1E80(v25, a3, a4);
			v27 = sub_1402D1C80((__int64)a2, a1[2], v26);
			sub_1402D2070(a1[1], a1[2]);
			v28 = a1[1];
			if (v28)
				sub_14018B900(v28, 0);
			a1[1] = (__int64)v24;
			a1[2] = v27;
			a1[3] = (__int64)&v24[v23];
		}
		else
		{
			sub_1402D1B70((__int64)v31, a4);
			v9 = a1[2];
			v10 = v9;
			v11 = (v9 - (__int64)a2) / 192;
			if (v11 <= a3)
			{
				v14 = a3 - v11;
				for (i = v14; i; --i)
				{
					if (v10)
						sub_1402D1B70(v10, (__int64)v31);
					v10 += 192i64;
				}
				a1[2] += 192 * v14;
				sub_1402D1C80((__int64)a2, v9, a1[2]);
				v13 = (_DWORD*)v9;
				a1[2] += 192 * v11;
			}
			else
			{
				v12 = v9 - 192 * a3;
				sub_1402D1C80(v12, a1[2], a1[2]);
				a1[2] += 192 * a3;
				sub_1402D1ED0((__int64)a2, v12, v9);
				v13 = &a2[48 * a3];
			}
			sub_1402D1CE0(a2, v13, (__int64)v31);
			v16 = 3;
			v17 = 3;
			v18 = &v33;
			do
			{
				v19 = *((_QWORD*)v18 - 1);
				v18 -= 8;
				if (v19)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
				--v17;
			} while (v17 >= 0);
			v20 = &v32;
			do
			{
				v21 = *((_QWORD*)v20 - 1);
				v20 -= 8;
				if (v21)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
				--v16;
			} while (v16 >= 0);
		}
	}
}

