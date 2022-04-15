//----- (00000001407DBDA8) ----------------------------------------------------
void __fastcall sub_1407DBDA8(UINT uExitCode, int a2, int a3)
{
	PVOID* v6; // rsi
	PVOID* v7; // rdi
	PVOID* v8; // r12
	PVOID* v9; // r15
	void(__fastcall * v10)(__int64, __int64, __int64, __int64); // rbx
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // r8
	__int64 v14; // r9
	PVOID* v15; // rbx
	PVOID* v16; // rax

	sub_1407E2340(8i64);
	if (dword_140C5F4E8 != 1)
	{
		dword_140C5F528 = 1;
		byte_140C5F524 = a3;
		if (!a2)
		{
			v6 = (PVOID*)DecodePointer(qword_140DC6358);
			if (v6)
			{
				v7 = (PVOID*)DecodePointer(qword_140DC6350);
				v8 = v6;
				v9 = v7;
				while (--v7 >= v6)
				{
					if (*v7 != EncodePointer(0i64))
					{
						if (v7 < v6)
							break;
						v10 = (void(__fastcall*)(__int64, __int64, __int64, __int64))DecodePointer(*v7);
						*v7 = EncodePointer(0i64);
						v10(v12, v11, v13, v14);
						v15 = (PVOID*)DecodePointer(qword_140DC6358);
						v16 = (PVOID*)DecodePointer(qword_140DC6350);
						if (v8 != v15 || v9 != v16)
						{
							v8 = v15;
							v6 = v15;
							v9 = v16;
							v7 = v16;
						}
					}
				}
			}
			sub_1407DBD20(&qword_14095BE88, (unsigned __int64)&unk_14095BEA8);
		}
		sub_1407DBD20(&qword_14095BEB0, (unsigned __int64)&unk_14095BEB8);
	}
	if (!a3)
	{
		dword_140C5F4E8 = 1;
		sub_1407E2528(8);
		sub_1407DBB74(uExitCode);
		ExitProcess(uExitCode);
	}
	sub_1407E2528(8);
}
// 1407DBEFD: conditional instruction was optimized away because r14d.4!=0
// 1407DBE79: variable 'v12' is possibly undefined
// 1407DBE79: variable 'v11' is possibly undefined
// 1407DBE79: variable 'v13' is possibly undefined
// 1407DBE79: variable 'v14' is possibly undefined
// 1407E2340: using guessed type __int64 __fastcall sub_1407E2340(_QWORD);
// 14095BE88: using guessed type void (*qword_14095BE88)(void);
// 14095BEB0: using guessed type void (*qword_14095BEB0)(void);
// 140C5F4E8: using guessed type int dword_140C5F4E8;
// 140C5F524: using guessed type char byte_140C5F524;
// 140C5F528: using guessed type int dword_140C5F528;

