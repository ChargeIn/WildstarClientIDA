//----- (00000001403B14C0) ----------------------------------------------------
__int64 __fastcall sub_1403B14C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
	unsigned __int64 v5; // r14
	unsigned int v8; // esi
	int v9; // ebp
	int v10; // r13d
	bool v11; // zf
	unsigned int v12; // r12d
	__int64 v13; // rbx
	unsigned int v14; // eax
	__int64 v15; // rbx
	int v16; // edi
	unsigned int v17; // eax
	int v18; // ecx
	__int64 v19; // rax
	__int64 v20; // r13
	unsigned __int64 v21; // rbp
	int v22; // edi
	__int64 v23; // rbx
	unsigned int v24; // eax
	unsigned __int64 v26; // r8
	_DWORD* v27; // rcx
	__int64 v29; // [rsp+78h] [rbp+10h] BYREF
	__int64 v30; // [rsp+80h] [rbp+18h]
	int v31; // [rsp+88h] [rbp+20h]

	v30 = a3;
	v29 = a2;
	v5 = 0i64;
	v8 = 0;
	if (!a4 || (v9 = 0, !*(_DWORD*)(a4 + 20)))
		v9 = 1;
	v10 = a5;
	v11 = (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 36i64) & 0xFFFFFFFD) == 0;
	v31 = 0;
	v12 = 0;
	if (v11)
	{
		v13 = *(_QWORD*)(a3 + 5640);
		if (v13)
		{
			while (1)
			{
				if (!*(_DWORD*)(v13 + 4))
				{
					if (*(_QWORD*)(v13 + 32))
					{
						v14 = sub_140195F70(v13 + 16);
						if (v14)
							break;
					}
				}
				v13 = *(_QWORD*)(v13 + 136);
				if (!v13)
					goto LABEL_16;
			}
			v8 = 14;
			if (v10)
			{
				v31 = 1;
				v12 = v14;
			}
			else
			{
				if (a4)
					sub_1403B51F0(a4, 0xEu);
				if (v9)
					return v8;
			}
		LABEL_16:
			a3 = v30;
		}
	}
	v15 = *(_QWORD*)(a3 + 5640);
	v16 = **(_DWORD**)(a2 + 112);
	if (v15)
	{
		while (1)
		{
			if (*(_DWORD*)(v15 + 4) == 1 && v16 == *(_DWORD*)(v15 + 12))
			{
				if (*(_QWORD*)(v15 + 32))
				{
					v17 = sub_140195F70(v15 + 16);
					if (v17)
						break;
				}
			}
			v15 = *(_QWORD*)(v15 + 136);
			if (!v15)
				goto LABEL_23;
		}
		v8 = 15;
		if (v10)
		{
			v18 = 1;
			v31 = 1;
			if (v12 < v17)
				v12 = v17;
		}
		else
		{
			if (a4)
				sub_1403B51F0(a4, 0xFu);
			if (v9)
				return v8;
		LABEL_23:
			v18 = v31;
		}
		a3 = v30;
	}
	else
	{
		v18 = v31;
	}
	v19 = v29;
	if (*(_QWORD*)(v29 + 56))
	{
		v20 = v9;
		v21 = 0i64;
		while (1)
		{
			v22 = *(_DWORD*)(*(_QWORD*)(v19 + 56) + v21 + 4);
			if (!v22)
				goto LABEL_51;
			v23 = *(_QWORD*)(a3 + 5640);
			if (!v23)
				goto LABEL_51;
			while (1)
			{
				if (*(_DWORD*)(v23 + 4) == 2 && v22 == *(_DWORD*)(v23 + 12))
				{
					if (*(_QWORD*)(v23 + 32))
					{
						v24 = sub_140195F70(v23 + 16);
						if (v24)
							break;
					}
				}
				v23 = *(_QWORD*)(v23 + 136);
				if (!v23)
					goto LABEL_51;
			}
			v8 = 16;
			if (!a5)
				break;
			v18 = 1;
			v31 = 1;
			if (v12 < v24)
				v12 = v24;
		LABEL_52:
			v21 += 4i64;
			if (v21 >= 0xC)
				goto LABEL_54;
			v19 = v29;
			a3 = v30;
		}
		if (a4)
			sub_1403B51F0(a4, 0x10u);
		if (v20)
			return v8;
	LABEL_51:
		v18 = v31;
		goto LABEL_52;
	}
LABEL_54:
	if (v18 && v12 <= (*(unsigned int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 120i64))(a1, a2, a3))
		return 317i64;
	if (a4 && v8)
	{
		v26 = *(_QWORD*)(a4 + 8);
		LODWORD(v29) = v8;
		*(_DWORD*)(a4 + 16) = v8;
		*(_DWORD*)(a4 + 24) = 1;
		if (v26)
		{
			v27 = *(_DWORD**)a4;
			while (*v27 != v8)
			{
				if (*v27 <= (signed int)v8)
				{
					++v5;
					++v27;
					if (v5 < v26)
						continue;
				}
				goto LABEL_64;
			}
		}
		else
		{
		LABEL_64:
			sub_1401C2E70((__int64*)a4, v5, (int*)&v29);
		}
	}
	return v8;
}
// 1403B156D: conditional instruction was optimized away because eax.4!=0
// 1403B1722: conditional instruction was optimized away because esi.4 is in (E..10)
// 1403B1704: variable 'a2' is possibly undefined
// 1403B1704: variable 'a3' is possibly undefined

