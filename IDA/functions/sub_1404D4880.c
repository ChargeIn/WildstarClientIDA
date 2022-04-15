//----- (00000001404D4880) ----------------------------------------------------
__int64 __fastcall sub_1404D4880(__int64 a1, unsigned __int16* a2, unsigned int a3, unsigned int a4)
{
	unsigned int v5; // esi
	unsigned int v8; // ebx
	int* v9; // rax
	__int64 v10; // rdi
	int v11; // eax
	int v12; // ecx
	__int64 result; // rax
	unsigned int v14; // [rsp+20h] [rbp-48h] BYREF
	__int64 v15; // [rsp+28h] [rbp-40h]
	char v16[16]; // [rsp+30h] [rbp-38h] BYREF
	unsigned int v17; // [rsp+80h] [rbp+18h]

	v5 = a3;
	if (*(_DWORD*)(a1 + 60) < a3)
		*(_DWORD*)(a1 + 60) = a3;
	if (*(_DWORD*)(a1 + 64) < a4)
		*(_DWORD*)(a1 + 64) = a4;
	if (a3 > a4)
		return 0i64;
	v8 = v17;
	while (1)
	{
		v9 = sub_14018B280(80i64, 0);
		v10 = (__int64)v9;
		if (v9)
		{
			v9[2] = 10;
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 3) = 0i64;
			*((_QWORD*)v9 + 5) = 0i64;
			*((_QWORD*)v9 + 4) = 0i64;
			*((_QWORD*)v9 + 6) = a1;
			*(_QWORD*)v9 = off_140B69038;
			*((_QWORD*)v9 + 9) = 0i64;
			*((_QWORD*)v9 + 8) = 0i64;
			v11 = *(_DWORD*)a2;
			*(_DWORD*)(v10 + 60) = v5;
			*(_DWORD*)(v10 + 56) = v11;
		}
		else
		{
			v10 = 0i64;
		}
		v12 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 28i64);
		v15 = v10;
		v8 = *a2 | v8 & 0xFC000000 | ((unsigned __int8)v5 << 16) | ((v12 & 3) << 24);
		v14 = v8;
		sub_1404D50E0(a1 + 72, (__int64)v16, (__int64)&v14);
		result = (**(__int64(__fastcall***)(__int64, _QWORD))v10)(v10, *(unsigned int*)(a1 + 8));
		if ((int)result < 0)
			break;
		if (++v5 > a4)
			return 0i64;
	}
	return result;
}
// 140B69038: using guessed type __int64 (__fastcall *off_140B69038[20])();
// 1404D4880: using guessed type char var_38[16];

