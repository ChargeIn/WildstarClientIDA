//----- (0000000140419770) ----------------------------------------------------
__int64 __fastcall sub_140419770(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // r15
	int v5; // r14d
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	signed int v10; // edi
	int v11; // ebx
	__int64 v12; // rbp
	__int64* v13; // rax
	__int64 v14; // r11
	__int64 v15; // r9
	int v16; // r8d
	__int64 v17; // rdx
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-38h] BYREF
	int v19; // [rsp+28h] [rbp-30h]
	_QWORD* v20; // [rsp+30h] [rbp-28h]
	int v21; // [rsp+38h] [rbp-20h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v5 = 0;
		if (!v2[100])
			goto LABEL_12;
		v6 = a1[4];
		v18 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v20 = a1;
		v21 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v19 = sub_1400578C0((__int64)a1);
		v10 = 0;
		v11 = 1;
		do
		{
			if ((v11 & v3[100]) != 0)
			{
				v12 = sub_14022D500(v10 + 1);
				sub_14022D560(v10);
				if (v12)
				{
					++v5;
					sub_1400FAD30((__int64)&v18);
				}
			}
			v11 = __ROL4__(v11, 1);
			++v10;
		} while (v10 < 16);
		v13 = sub_14005C3C0(*(_QWORD*)(v20[4] + 160i64), v19);
		v15 = *(_QWORD*)(v14 + 16);
		v16 = v19;
		v17 = *v13;
		*(_QWORD*)v15 = *v13;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(v14 + 16) += 16i64;
		sub_1400579E0(v14, v17, v16);
		if (!v5)
		{
		LABEL_12:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1404198A3: variable 'v14' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

