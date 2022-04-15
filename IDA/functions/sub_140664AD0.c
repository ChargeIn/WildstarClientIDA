//----- (0000000140664AD0) ----------------------------------------------------
__int64 __fastcall sub_140664AD0(_QWORD* a1)
{
	__int64 v1; // r14
	_WORD* v2; // r8
	int v3; // edi
	unsigned __int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rsi
	unsigned __int64 v7; // rdx
	_WORD* v8; // rax
	__int16 v9; // r9
	int* v10; // rcx
	int v11; // ebx
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rsi
	__int64 v15; // rax

	v1 = sub_140056AB0(a1, 1u);
	if (!v1)
		return 0i64;
	v2 = *(_WORD**)(qword_140C65898 + 136);
	v3 = 0;
	v4 = 0i64;
	if (*v2)
	{
		do
			++v4;
		while (v2[v4]);
	}
	v5 = qword_140C7E830;
	v6 = qword_140C7E828;
	if ((qword_140C7E830 - qword_140C7E828) >> 1 != v4)
		goto LABEL_15;
	v7 = 0i64;
	if (v4)
	{
		v8 = *(_WORD**)(qword_140C65898 + 136);
		do
		{
			v9 = *(_WORD*)((char*)v8 + qword_140C7E828 - (_QWORD)v2);
			if (v9 != *v8)
				goto LABEL_15;
			++v7;
			++v8;
		} while (v7 < v4);
	}
	v10 = *(int**)(*(_QWORD*)v1 + 8i64);
	if (dword_140C65C38 != *v10)
	{
	LABEL_15:
		v12 = (int*)&unk_1409F489C;
		v13 = 0i64;
		if (v2)
			v12 = *(int**)(qword_140C65898 + 136);
		if (*(_WORD*)v12)
		{
			do
				++v13;
			while (*((_WORD*)v12 + v13));
		}
		sub_14001C480((__int64)&unk_140C7E820, v12, (int*)((char*)v12 + 2 * v13));
		v10 = *(int**)(*(_QWORD*)v1 + 8i64);
		v11 = *v10;
		goto LABEL_20;
	}
	if (qword_140C7E828 != qword_140C7E830)
	{
		sub_1407DB590((int*)qword_140C7E828, (int*)qword_140C7E830, 2ui64);
		v10 = (int*)(qword_140C7E830 - 2 * ((v5 - v6) >> 1));
		qword_140C7E830 = (__int64)v10;
	}
	v11 = 0;
LABEL_20:
	dword_140C65C38 = v11;
	v14 = *(_QWORD*)(qword_140C65898 + 29504);
	v15 = sub_1405A8A40((__int64)v10, v11);
	if (v15)
	{
		LOBYTE(v3) = dword_140C65C38 == v11;
		sub_1400EA3E0(v14, "QuestHighlightChanged", byte_1409E925C, v15, v3);
	}
	return 0i64;
}
// 140664B89: conditional instruction was optimized away because ebp.4 is in (==1|==FFFFFFFF)
// 1409E925C: using guessed type _BYTE byte_1409E925C[48];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C38: using guessed type int dword_140C65C38;
// 140C7E828: using guessed type __int64 qword_140C7E828;
// 140C7E830: using guessed type __int64 qword_140C7E830;

