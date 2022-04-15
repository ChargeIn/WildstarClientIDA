//----- (0000000140561E60) ----------------------------------------------------
bool __fastcall sub_140561E60(__int64 a1, int a2, int a3)
{
	__int64 v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rax
	bool result; // al
	__int64 v10; // rcx

	v4 = sub_1403D90D0(qword_140C65898, a2);
	v5 = sub_1403D90D0(qword_140C65898, a3);
	v6 = v5;
	if (!v4)
		return 0;
	if (!v5)
		return 0;
	v7 = sub_14047DCA0(v4);
	v8 = sub_14047DCA0(v6);
	if (!v7 || !v8)
		return 0;
	if (v7 == v8)
		return 1;
	v10 = *(_QWORD*)(v8 + 6304);
	result = 0;
	if (v10)
		return *(_QWORD*)(v7 + 6304) == v10;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

