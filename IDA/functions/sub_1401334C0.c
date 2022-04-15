//----- (00000001401334C0) ----------------------------------------------------
__int64 __fastcall sub_1401334C0(_QWORD* a1, unsigned int a2)
{
	unsigned int* v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rcx
	unsigned int v5; // eax
	__int64 v7; // [rsp+40h] [rbp+18h]

	v2 = (unsigned int*)sub_140056AB0(a1, a2);
	if (!v2)
		return 0i64;
	v3 = qword_140C67260;
	v4 = *(_QWORD*)(qword_140C67260 + 8);
	if (!v4)
		goto LABEL_10;
	v5 = *v2;
	do
	{
		if (*(_DWORD*)(v4 + 32) < v5)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	} while (v4);
	if (v3 == qword_140C67260 || (v7 = v3, v5 < *(_DWORD*)(v3 + 32)))
		LABEL_10:
	v7 = qword_140C67260;
	if (v7 == qword_140C67260)
		return 0i64;
	else
		return *(_QWORD*)(v7 + 40);
}
// 140C67260: using guessed type __int64 qword_140C67260;

