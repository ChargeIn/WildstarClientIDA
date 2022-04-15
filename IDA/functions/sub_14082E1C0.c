//----- (000000014082E1C0) ----------------------------------------------------
void** __fastcall sub_14082E1C0(__int64 a1)
{
	void** result; // rax
	_QWORD* v3; // rdi
	__int64 v4; // rsi
	__int64 v5; // rcx
	int v6; // eax
	_QWORD* v7; // rbp
	int v8; // edi
	_QWORD* v9; // [rsp+20h] [rbp-88h]
	int v10[20]; // [rsp+40h] [rbp-68h] BYREF
	void* retaddr; // [rsp+A8h] [rbp+0h] BYREF

	result = &retaddr;
	if (*(_DWORD*)(a1 + 124))
	{
		v3 = *(_QWORD**)(a1 + 96);
		if (v3)
		{
			while (1)
			{
				v4 = v3[2];
				v10[0] = 0;
				v5 = *(_QWORD*)(v4 + 8);
				v6 = *(unsigned __int16*)(v5 + 60);
				if (v6 != 1027)
				{
					if (v6 != 1283)
						goto LABEL_7;
					sub_1408570E0(v5);
				}
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v4 + 8) + 88i64))(*(_QWORD*)(v4 + 8), v10);
			LABEL_7:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v4 + 56));
				v7 = (_QWORD*)*v3;
				v9 = (_QWORD*)*v3;
				if (v3 == *(_QWORD**)(a1 + 96))
					*(_QWORD*)(a1 + 96) = v7;
				else
					MEMORY[0] = *v3;
				if (v3 == *(_QWORD**)(a1 + 104))
					*(_QWORD*)(a1 + 104) = 0i64;
				*v3 = *(_QWORD*)(a1 + 112);
				--* (_DWORD*)(a1 + 128);
				*(_QWORD*)(a1 + 112) = v3;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 8) + 16i64))(*(_QWORD*)(v4 + 8));
				v8 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 8i64))(v4, 0i64);
				result = (void**)sub_140881720(v8, v4);
				if (!v7)
					return result;
				v3 = v9;
			}
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14082E1C0: using guessed type int var_68[20];

