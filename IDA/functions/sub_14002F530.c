//----- (000000014002F530) ----------------------------------------------------
__int64 __fastcall sub_14002F530(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // ebx
	char v7[8]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+50h] [rbp+8h]

	if (!*(_QWORD*)(a1 + 4712))
		return 0i64;
	sub_140030C70((__int64)v7, a1 + 4720);
	v4 = *(_QWORD*)(v8 + 8);
	v5 = v8;
	if (!v4)
		goto LABEL_10;
	do
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	} while (v4);
	if (v5 == v8 || (v9 = v5, a2 < *(_DWORD*)(v5 + 32)))
		LABEL_10:
	v9 = v8;
	if (v9 == v8)
		v6 = 0;
	else
		v6 = *(_DWORD*)(v9 + 36);
	sub_140008410((__int64)v7);
	sub_14018B900(v8, 0);
	return v6;
}
// 14002F530: using guessed type char var_28[8];

