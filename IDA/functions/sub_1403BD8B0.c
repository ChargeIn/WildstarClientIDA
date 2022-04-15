//----- (00000001403BD8B0) ----------------------------------------------------
void __fastcall sub_1403BD8B0(__int64 a1, unsigned int a2, __int64* a3, __int64 a4)
{
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // r15
	int v12; // eax
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	__int64 v15; // [rsp+30h] [rbp-28h] BYREF
	int v16; // [rsp+38h] [rbp-20h]
	char v17; // [rsp+70h] [rbp+18h] BYREF

	if (a3 && a4)
	{
		if (*(_DWORD*)(a1 + 26184) == 9
			&& *(_DWORD*)((*(__int64(__fastcall**)(__int64*, char*))(*a3 + 32))(a3, &v17) + 4) == *(_DWORD*)(a1 + 26272))
		{
			*(_DWORD*)(a1 + 26184) = 11;
		}
		else if ((unsigned int)sub_1403A1630(a1, a2, 1))
		{
			v8 = 0i64;
			v9 = sub_14055BDC0(a1, *(_QWORD*)(a1 + 120), a4, 0, 0);
			v10 = *a3;
			v11 = v9;
			v16 = 0;
			v15 = 0i64;
			LOWORD(v15) = *(_WORD*)((*(__int64(__fastcall**)(__int64*, char*))(v10 + 32))(a3, &v17) + 4);
			if (v11)
				v12 = *(_DWORD*)(v11 + 8);
			else
				v12 = 0;
			HIDWORD(v15) = v12;
			sub_1403F4900(a1, 0x4DBu, (__int64)&v15);
			v13 = *(_QWORD*)(a1 + 25456);
			if (v13)
			{
				v14 = *(_DWORD**)(a1 + 25448);
				while (*v14 != a2)
				{
					++v8;
					++v14;
					if (v8 >= v13)
						goto LABEL_16;
				}
				sub_1401C2F20(a1 + 25448, v8);
			}
		LABEL_16:
			sub_1403BDB30(a1, **(_DWORD**)(a4 + 112));
			sub_1403A1510(a1);
		}
	}
}

