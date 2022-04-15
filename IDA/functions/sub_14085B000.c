//----- (000000014085B000) ----------------------------------------------------
void __fastcall sub_14085B000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
	_QWORD* i; // rbx
	__int64 v9; // rax
	int v10; // [rsp+20h] [rbp-28h]

	for (i = *(_QWORD**)(a1 + 112); i != *(_QWORD**)(a1 + 120); ++i)
	{
		v9 = *(_QWORD*)(*i + 56i64);
		if (v9)
		{
			if (*(_WORD*)(v9 + 72))
			{
				LOBYTE(v10) = a5;
				(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, int))(*(_QWORD*)*i + 184i64))(*i, a2, a3, a4, v10);
			}
		}
	}
}
// 14085B064: variable 'a2' is possibly undefined
// 14085B064: variable 'v10' is possibly undefined

