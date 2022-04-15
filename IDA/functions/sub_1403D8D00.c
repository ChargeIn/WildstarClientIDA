//----- (00000001403D8D00) ----------------------------------------------------
__int64 __fastcall sub_1403D8D00(__int64 a1, _DWORD* a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	unsigned int* v6; // rbx
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	unsigned __int64 v11; // rsi
	_QWORD* v12; // rbx
	int v14; // [rsp+30h] [rbp+8h] BYREF

	v4 = (*(__int64(__fastcall**)(_DWORD*))(a1 + 136))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 128) + 8 * (v4 % *(_QWORD*)(a1 + 120)));
	if (!v5)
		goto LABEL_7;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(_DWORD*, _QWORD*))(a1 + 144))(a2, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			goto LABEL_7;
	}
	v6 = (unsigned int*)v5 + 5;
	if (!v6)
	{
	LABEL_7:
		v14 = a2[81];
		v7 = (*(__int64(__fastcall**)(int*))(a1 + 216))(&v14);
		v8 = *(_QWORD**)(*(_QWORD*)(a1 + 208) + 8 * (v7 % *(_QWORD*)(a1 + 200)));
		if (!v8)
			goto LABEL_13;
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 224))(&v14, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				goto LABEL_13;
		}
		v6 = (unsigned int*)v8 + 5;
		if (!v6)
		{
		LABEL_13:
			v14 = a2[82];
			v9 = (*(__int64(__fastcall**)(int*))(a1 + 256))(&v14);
			v10 = *(_QWORD**)(*(_QWORD*)(a1 + 248) + 8 * (v9 % *(_QWORD*)(a1 + 240)));
			if (!v10)
				goto LABEL_19;
			while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 264))(&v14, v10 + 2))
			{
				v10 = (_QWORD*)v10[1];
				if (!v10)
					goto LABEL_19;
			}
			v6 = (unsigned int*)v10 + 5;
			if (!v6)
			{
			LABEL_19:
				v14 = a2[80];
				v11 = (*(__int64(__fastcall**)(int*))(a1 + 296))(&v14);
				v12 = *(_QWORD**)(*(_QWORD*)(a1 + 288) + 8 * (v11 % *(_QWORD*)(a1 + 280)));
				if (!v12)
					return 0i64;
				while (v11 != *v12 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 304))(&v14, v12 + 2))
				{
					v12 = (_QWORD*)v12[1];
					if (!v12)
						return 0i64;
				}
				v6 = (unsigned int*)v12 + 5;
				if (!v6)
					return 0i64;
			}
		}
	}
	return sub_1402116C0(*v6);
}

