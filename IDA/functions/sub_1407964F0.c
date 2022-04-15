//----- (00000001407964F0) ----------------------------------------------------
void __fastcall __noreturn sub_1407964F0(_QWORD* a1, const char* a2)
{
	const char* v2; // rdi
	__int64 v4; // rax
	const char* v6; // rsi
	_DWORD* v7; // rcx

	v2 = 0i64;
	v4 = a1[2] - 16i64;
	if (*(_DWORD*)(v4 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
		{
			v6 = 0i64;
			goto LABEL_8;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2] - 16i64;
	}
	v6 = (const char*)(*(_QWORD*)v4 + 32i64);
LABEL_8:
	v7 = dword_140A12138;
	if (a1[3] < a1[2])
		v7 = (_DWORD*)a1[3];
	if (v7[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v7))
			goto LABEL_17;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = dword_140A12138;
		if (a1[3] < a1[2])
			v7 = (_DWORD*)a1[3];
	}
	v2 = (const char*)(*(_QWORD*)v7 + 32i64);
LABEL_17:
	sub_140056830(a1, (unsigned __int64*)"error loading module '%s' from file '%s':\n\t%s", v2, a2, v6);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

