//----- (00000001408998C0) ----------------------------------------------------
char __fastcall sub_1408998C0(__int64 a1)
{
	_QWORD* v1; // rax
	char v3; // cl
	unsigned int v4; // edi
	__int64 v5; // rcx
	_QWORD* i; // rbx
	__int64 v7; // rcx
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	char v10; // [rsp+28h] [rbp-10h]
	__int64 v11; // [rsp+40h] [rbp+8h] BYREF

	LOBYTE(v1) = *(_BYTE*)(a1 + 98);
	if (((unsigned __int8)v1 & 1) != 0 || ((unsigned __int8)v1 & 0xF) == 0)
	{
		v3 = *(_BYTE*)(a1 + 192);
		if ((v3 & 1) != 0)
		{
			v9 = 0i64;
			v10 = 0;
			*(_BYTE*)(a1 + 192) = v3 & 0xFE;
			if (((unsigned __int8)v1 & 0xFu) <= 1)
			{
				v4 = sub_140899EB0((_QWORD*)a1);
				v11 = sub_140898DF0(a1, v4);
				if (v11)
				{
					sub_140899FD0((_QWORD*)a1, v4, (__int64)&v9, &v11);
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 72i64))(v11);
				}
			}
		}
		v1 = *(_QWORD**)(a1 + 176);
		if (!*v1)
		{
			v5 = *(_QWORD*)(a1 + 16);
			if (!v5 || (LOBYTE(v1) = sub_1408993F0(v5), !(_BYTE)v1))
			{
				for (i = *(_QWORD**)(a1 + 160); i; i = (_QWORD*)*i)
				{
					v7 = i[1];
					if (v7)
						LOBYTE(v1) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 144i64))(v7);
				}
			}
		}
	}
	return (char)v1;
}

