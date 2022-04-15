//----- (000000014082DF30) ----------------------------------------------------
void** __fastcall sub_14082DF30(__int64 a1)
{
	void** result; // rax
	__int64 v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // eax
	unsigned int v8; // edx
	int v9; // edi
	int v10[22]; // [rsp+40h] [rbp-58h] BYREF
	void* retaddr; // [rsp+98h] [rbp+0h] BYREF

	result = &retaddr;
	v3 = *(_QWORD*)(a1 + 96);
	if (v3)
	{
		while (1)
		{
			result = (void**)*(unsigned int*)(a1 + 192);
			if (*(_DWORD*)(v3 + 8) > (unsigned int)result)
				break;
			v4 = *(_QWORD*)(v3 + 16);
			if (v3 == *(_QWORD*)(a1 + 96))
				*(_QWORD*)(a1 + 96) = *(_QWORD*)v3;
			else
				MEMORY[0] = *(_QWORD*)v3;
			if (v3 == *(_QWORD*)(a1 + 104))
				*(_QWORD*)(a1 + 104) = 0i64;
			v5 = *(_QWORD*)(a1 + 112);
			v10[0] = 0;
			*(_QWORD*)v3 = v5;
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v3;
			v6 = *(_QWORD*)(v4 + 8);
			v7 = *(unsigned __int16*)(v6 + 60);
			if (v7 == 1027 || v7 == 1283 && (unsigned __int8)sub_1408570E0(v6))
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v4 + 8) + 88i64))(*(_QWORD*)(v4 + 8), v10);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v4 + 8) + 64i64))(*(_QWORD*)(v4 + 8), v4);
			v8 = *(_DWORD*)(v4 + 56);
			if (v8)
				sub_14083C260(qword_140C61B80, v8);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 8) + 16i64))(*(_QWORD*)(v4 + 8));
			v9 = dword_140C10F20;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 8i64))(v4, 0i64);
			sub_140881720(v9, v4);
			++dword_140C62410;
			result = *(void***)(a1 + 96);
			if (!result)
				break;
			v3 = *(_QWORD*)(a1 + 96);
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C62410: using guessed type int dword_140C62410;
// 14082DF30: using guessed type int var_58[22];

