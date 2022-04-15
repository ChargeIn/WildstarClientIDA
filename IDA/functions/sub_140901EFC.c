//----- (0000000140901EFC) ----------------------------------------------------
__int64 __fastcall sub_140901EFC(WCHAR* a1, unsigned __int64 a2, __int64 a3)
{
	WCHAR* v5; // rbx
	_QWORD* v6; // rax
	unsigned int v7; // ebx
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // r14
	SIZE_T v12; // rcx
	__int64 v13; // rax
	void* v14; // rsp
	char* v15; // rdi
	char* v16; // rax
	__int64 v17; // [rsp+0h] [rbp-30h] BYREF
	__int64 v18; // [rsp+30h] [rbp+0h] BYREF

	v5 = a1;
	if (!a1)
		goto LABEL_2;
	if (sub_1407E6CBC(a1, a2) >= a2)
	{
		*v5 = 0;
	LABEL_2:
		v6 = sub_1407DE1B0();
		v7 = 22;
	LABEL_3:
		*(_DWORD*)v6 = v7;
		sub_1407DC370();
		return v7;
	}
	v8 = *(_QWORD*)(*(_QWORD*)a3 + 312i64);
	if (v8)
	{
		v9 = sub_1407ED230(v8, 0x200u, v5, -1, 0i64, 0);
		v10 = v9;
		if (!v9)
		{
			*(_DWORD*)sub_1407DE1B0() = 42;
			return *(unsigned int*)sub_1407DE1B0();
		}
		if (a2 < v9)
		{
			*v5 = 0;
			v6 = sub_1407DE1B0();
			v7 = 34;
			goto LABEL_3;
		}
		if (v9 <= 0 || 0xFFFFFFFFFFFFFFE0ui64 / v9 < 2)
		{
			v15 = 0i64;
		}
		else
		{
			v12 = 2i64 * v9 + 16;
			if (v12 > 0x400)
			{
				v16 = (char*)sub_1407E1500(v12);
				v15 = v16;
				if (!v16)
					goto LABEL_28;
				*(_DWORD*)v16 = 56797;
			}
			else
			{
				v13 = 2i64 * v9 + 31;
				if (2 * v10 + 31 <= (unsigned __int64)(2 * v10 + 16))
					v13 = 0xFFFFFFFFFFFFFF0i64;
				v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0ui64);
				v15 = (char*)&v18;
				if (&v17 == (__int64*)-48i64)
				{
				LABEL_29:
					*(_DWORD*)sub_1407DE1B0() = 12;
					return *(unsigned int*)sub_1407DE1B0();
				}
				LODWORD(v18) = 52428;
			}
			v15 += 16;
		}
	LABEL_28:
		if (v15)
		{
			if (sub_1407ED230(*(_QWORD*)(*(_QWORD*)a3 + 312i64), 0x200u, v5, -1, (WCHAR*)v15, v10))
			{
				v7 = sub_1407E6BF4((char*)v5, a2, v15);
			}
			else
			{
				v7 = 42;
				*(_DWORD*)sub_1407DE1B0() = 42;
			}
			if (*((_DWORD*)v15 - 4) == 56797)
				sub_1407E14C0(v15 - 16);
			return v7;
		}
		goto LABEL_29;
	}
	while (*v5)
	{
		if ((unsigned __int16)(*v5 - 97) <= 0x19u)
			*v5 -= 32;
		++v5;
	}
	return 0i64;
}

