//----- (0000000140958C00) ----------------------------------------------------
__int64 __fastcall sub_140958C00(__int64 a1, char* a2, int a3)
{
	char v3; // bp
	_DWORD* StackBase; // rsi
	__int64 v7; // rax
	int v8; // r14d
	__int64 v9; // rdx
	_DWORD* v10; // rdi
	__int64 v11; // rcx
	int v12; // esi
	__int64 v14; // rax

	v3 = a3;
	if ((a3 & 0x800000) != 0)
	{
		*(_QWORD*)(a1 + 200) = a2;
		*(_DWORD*)(a1 + 232) = 1;
		if ((a3 & 0x20) != 0)
			goto LABEL_7;
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v7 = 0i64;
		v8 = *(StackBase - 1);
		*(StackBase - 1) = 1;
		if (a2)
			v7 = (*(__int64(__fastcall**)(char*))(*(_QWORD*)a2 + 48i64))(a2);
		*(StackBase - 1) = v8;
		*(_QWORD*)(a1 + 192) = v7;
	LABEL_6:
		if ((v3 & 0x20) == 0)
		{
		LABEL_11:
			*(_QWORD*)a1 = sub_1409580E0;
			*(_QWORD*)(a1 + 8) = sub_140958210;
			*(_QWORD*)(a1 + 16) = sub_140958650;
			*(_QWORD*)(a1 + 24) = sub_140958670;
			*(_QWORD*)(a1 + 32) = sub_1409587B0;
			*(_QWORD*)(a1 + 40) = sub_140958720;
			*(_QWORD*)(a1 + 48) = sub_140958B40;
			return 1i64;
		}
	LABEL_7:
		v9 = *(_QWORD*)(a1 - 344);
		*(_QWORD*)(a1 + 192) = v9;
		if (v9)
		{
			v10 = NtCurrentTeb()->NtTib.StackBase;
			v11 = *(_QWORD*)(a1 + 200);
			v12 = *(v10 - 1);
			*(v10 - 1) = 1;
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 56i64))(v11);
			*(v10 - 1) = v12;
		}
		goto LABEL_11;
	}
	v14 = sub_140958000(a2, 1u);
	*(_QWORD*)(a1 + 200) = v14;
	if (!v14)
		*(_QWORD*)(a1 + 200) = sub_140958000(a2, 3u);
	if (*(_QWORD*)(a1 + 200))
		goto LABEL_6;
	return 0i64;
}

// nfuncs=28379 queued=28216 decompiled=28216 lumina nreq=0 worse=0 better=0
#error "There were 8 decompilation failure(s) on 28216 function(s)"
