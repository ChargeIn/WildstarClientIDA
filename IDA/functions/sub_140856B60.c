//----- (0000000140856B60) ----------------------------------------------------
char __fastcall sub_140856B60(__int64 a1, __int64 a2, __int64* a3)
{
	_QWORD* v4; // rcx
	__int64 v7; // rdi
	__int64* v8; // rcx
	unsigned int v10; // edx
	__int64 v11; // rcx
	__int64 v12; // rdi
	unsigned __int64 v13; // rdx
	__int64 v14; // rdi
	__int64 v15; // rdi
	__int64 v16; // rcx
	_QWORD* v17; // r8
	__int64 v18; // rcx
	_DWORD* v20; // rax
	__int64 v21; // rcx
	unsigned int v22[10]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v23; // [rsp+60h] [rbp+8h] BYREF

	v4 = *(_QWORD**)(a1 + 112);
	if (!v4)
		return 1;
	if (v4[1] != *v4)
	{
		do
		{
			v7 = *(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64);
			v8 = *(__int64**)(v7 - 16);
			if (v8)
			{
				v13 = *(_QWORD*)(v7 - 8);
				v23 = 0i64;
				sub_140874330(v8, v13, &v23);
				v14 = *(_QWORD*)(a1 + 112);
				sub_140865E90((_QWORD*)(*(_QWORD*)(v14 + 8) - 40i64));
				*(_QWORD*)(v14 + 8) -= 40i64;
				v15 = v23;
				if (!v23)
				{
					v21 = *(_QWORD*)(a1 + 112);
					*(_QWORD*)(a1 + 112) = 0i64;
					if (!v21)
						return 1;
					sub_140866000(v21);
					v18 = v23;
					if (!v23)
						return 1;
				LABEL_19:
					sub_140866000(v18);
					return 1;
				}
				sub_140865FB0(v23);
				v16 = *(_QWORD*)(a1 + 112);
				*(_QWORD*)(a1 + 112) = v15;
				if (v16)
					sub_140866000(v16);
				if (v23)
					sub_140866000(v23);
			}
			else
			{
				if (!sub_14084F1E0(*(_QWORD*)(v7 - 40), a2))
				{
					v20 = (_DWORD*)sub_14086D020(
						*(_QWORD*)(v7 - 40),
						a3,
						(unsigned __int16*)&v23,
						v22,
						(__int64*)(v7 - 32),
						v7 - 24);
					if (!v20)
						break;
					*(_WORD*)(a1 + 2i64 * (unsigned int)(*(_DWORD*)(a1 + 120) - 1) + 124) = v23;
					*(_DWORD*)(a1 + 56) = v20[6];
					(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v20 + 16i64))(v20);
					return 0;
				}
				if ((*(_DWORD*)(a1 + 120))-- != 1)
				{
					do
					{
						v10 = *(_DWORD*)(a1 + 120) - 1;
						if (v10 < 0x20)
						{
							v11 = *(unsigned int*)(a1 + 188);
							if (_bittest64(&v11, v10))
								break;
						}
						*(_DWORD*)(a1 + 120) = v10;
					} while (v10);
				}
				v12 = *(_QWORD*)(a1 + 112);
				sub_140865E90((_QWORD*)(*(_QWORD*)(v12 + 8) - 40i64));
				*(_QWORD*)(v12 + 8) -= 40i64;
			}
		} while (*(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64) != **(_QWORD**)(a1 + 112));
	}
	v17 = *(_QWORD**)(a1 + 112);
	if (!(unsigned int)((v17[1] - *v17) / 40i64))
	{
		*(_QWORD*)(a1 + 112) = 0i64;
		if (v17)
		{
			v18 = (__int64)v17;
			goto LABEL_19;
		}
	}
	return 1;
}
// 140856B60: using guessed type unsigned int var_28[10];

