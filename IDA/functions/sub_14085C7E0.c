//----- (000000014085C7E0) ----------------------------------------------------
void __fastcall sub_14085C7E0(__int64 a1)
{
	__int64* i; // rbx
	__int64 v3; // rax
	__int64 v4; // r8
	__int64 v5; // r9
	__int64 v6; // rdi
	__int64 v7; // r8
	__int64** v8; // rax
	__int64* v9; // rax

	for (i = *(__int64**)(a1 + 176); i; i = (__int64*)*i)
	{
		v3 = sub_140830F00(qword_140C61BA8, *((_DWORD*)i + 2), 1);
		v6 = v3;
		if (v3)
		{
			if (((*(unsigned __int8*)(a1 + 328) >> 1) & 7) != 0)
			{
				if (((*(unsigned __int8*)(a1 + 328) >> 1) & 7) == 1)
				{
					sub_140859D40(v3, *(_DWORD*)(a1 + 24), v4, *((_DWORD*)i + 4), *((_DWORD*)i + 6), *((_DWORD*)i + 7));
				}
				else if (((*(unsigned __int8*)(a1 + 328) >> 1) & 7) == 2)
				{
					sub_14085B550(v3, *(_DWORD*)(a1 + 24), v4, v5);
				}
			}
			else
			{
				v7 = *((unsigned int*)i + 7);
				v8 = 0i64;
				if ((_DWORD)v7)
				{
					if ((_DWORD)v7 == 4)
						v8 = (__int64**)(v6 + 272);
				}
				else
				{
					v8 = (__int64**)(v6 + 224);
				}
				v9 = *v8;
				if (v9)
				{
					while (*((_DWORD*)v9 + 2) != *(_DWORD*)(a1 + 24))
					{
						v9 = (__int64*)*v9;
						if (!v9)
							goto LABEL_18;
					}
					if (v9 != (__int64*)-16i64)
						sub_14085C450(v6, (__int64)(v9 + 2), v7, 0i64, *((_DWORD*)i + 6), *((_DWORD*)i + 5), *((_DWORD*)i + 7));
				}
			}
		LABEL_18:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		}
	}
}
// 14085C851: variable 'v4' is possibly undefined
// 14085C851: variable 'v5' is possibly undefined

