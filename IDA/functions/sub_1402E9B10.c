//----- (00000001402E9B10) ----------------------------------------------------
__int64 __fastcall sub_1402E9B10(__int64 a1)
{
	__int64 result; // rax
	int v3; // edx
	__int64 v4; // rdi
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	_QWORD* v7; // rbx
	int v8; // edx
	__int64 v9; // rcx
	int v10; // [rsp+40h] [rbp+8h]
	int v11; // [rsp+44h] [rbp+Ch]
	int v12; // [rsp+48h] [rbp+10h] BYREF
	int v13; // [rsp+4Ch] [rbp+14h]

	result = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(result + 144))
	{
		result = *(unsigned int*)(a1 + 40);
		v11 = result;
		if ((int)result < *(_DWORD*)(a1 + 48))
		{
			while (1)
			{
				v3 = *(_DWORD*)(a1 + 36);
				v10 = v3;
				if (v3 < *(_DWORD*)(a1 + 44))
					break;
			LABEL_15:
				result = (unsigned int)(v11 + 1);
				v11 = result;
				if ((int)result >= *(_DWORD*)(a1 + 48))
					return result;
			}
			while (1)
			{
				v4 = *(_QWORD*)(a1 + 16);
				v12 = v3 / 16;
				v13 = v11 / 16;
				v5 = (*(__int64(__fastcall**)(int*))(v4 + 64))(&v12);
				v6 = *(_QWORD**)(*(_QWORD*)(v4 + 56) + 8 * (v5 % *(_QWORD*)(v4 + 48)));
				if (!v6)
					goto LABEL_13;
				while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v4 + 72))(&v12, v6 + 2))
				{
					v6 = (_QWORD*)v6[1];
					if (!v6)
						goto LABEL_13;
				}
				v7 = v6 + 3;
				if (!v7 || !*v7)
					goto LABEL_13;
				v8 = v10;
				v9 = *(_QWORD*)(*v7 + 8i64 * ((v10 & 0xF) + 16 * (v11 & 0xFu)) + 32);
				if (v9)
					break;
			LABEL_14:
				v3 = v8 + 1;
				v10 = v3;
				if (v3 >= *(_DWORD*)(a1 + 44))
					goto LABEL_15;
			}
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(a1 + 16) + 144i64))(
				v9,
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 224i64));
		LABEL_13:
			v8 = v10;
			goto LABEL_14;
		}
	}
	return result;
}

