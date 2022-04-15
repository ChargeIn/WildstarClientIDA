//----- (00000001402E9C40) ----------------------------------------------------
__int64 __fastcall sub_1402E9C40(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	int v6; // edx
	__int64 v7; // rdi
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	__int64* v10; // rbx
	__int64 v11; // rbx
	int v12; // edx
	_QWORD* v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rcx
	int v16; // [rsp+60h] [rbp+8h]
	int v17; // [rsp+64h] [rbp+Ch]
	int v18; // [rsp+68h] [rbp+10h] BYREF
	int v19; // [rsp+6Ch] [rbp+14h]
	__int64 v20; // [rsp+70h] [rbp+18h]
	__int64 v21; // [rsp+78h] [rbp+20h]

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (*(_QWORD*)(a1 + 16))
		{
			v3 = *(_QWORD**)(a1 + 104);
			if (v3)
				*v3 = *(_QWORD*)(a1 + 112);
			v4 = *(_QWORD*)(a1 + 112);
			if (v4)
				*(_QWORD*)(v4 + 104) = *(_QWORD*)(a1 + 104);
			v5 = *(_DWORD*)(a1 + 40);
			*(_QWORD*)(a1 + 104) = 0i64;
			*(_QWORD*)(a1 + 112) = 0i64;
			v17 = v5;
			if (v5 < *(_DWORD*)(a1 + 48))
			{
				while (1)
				{
					v6 = *(_DWORD*)(a1 + 36);
					v16 = v6;
					if (v6 < *(_DWORD*)(a1 + 44))
						break;
				LABEL_24:
					if (++v17 >= *(_DWORD*)(a1 + 48))
						goto LABEL_25;
				}
				while (1)
				{
					v7 = *(_QWORD*)(a1 + 16);
					v18 = v6 / 16;
					v19 = v17 / 16;
					v8 = (*(__int64(__fastcall**)(int*))(v7 + 64))(&v18);
					v9 = *(_QWORD**)(*(_QWORD*)(v7 + 56) + 8 * (v8 % *(_QWORD*)(v7 + 48)));
					if (!v9)
						goto LABEL_22;
					while (v8 != *v9 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v7 + 72))(&v18, v9 + 2))
					{
						v9 = (_QWORD*)v9[1];
						if (!v9)
							goto LABEL_22;
					}
					v10 = v9 + 3;
					if (!v10)
						goto LABEL_22;
					v11 = *v10;
					v21 = v11;
					if (!v11)
						goto LABEL_22;
					v12 = v16;
					v13 = *(_QWORD**)(v11 + 8i64 * ((v16 & 0xF) + 16 * (v17 & 0xFu)) + 32);
					if (v13)
						break;
				LABEL_23:
					v6 = v12 + 1;
					v16 = v6;
					if (v6 >= *(_DWORD*)(a1 + 44))
						goto LABEL_24;
				}
				v14 = 0i64;
				v20 = 0i64;
				if (v13[4])
				{
					v15 = v13[5];
					if (v15)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
						v14 = v20;
						v13[5] = 0i64;
					}
					v13[4] = 0i64;
					v13[5] = v14;
					v13[6] = 0i64;
				}
				(*(void(__fastcall**)(_QWORD*))(*v13 + 8i64))(v13);
			LABEL_22:
				v12 = v16;
				goto LABEL_23;
			}
		LABEL_25:
			if (*(float*)(a1 + 96) != 0.0)
				sub_1402E9B10(a1);
		}
		if (!_InterlockedDecrement((volatile signed __int32*)(a1 + 12)))
		{
			sub_1402E9750((_QWORD*)a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

