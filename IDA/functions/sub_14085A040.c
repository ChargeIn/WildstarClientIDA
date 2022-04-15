//----- (000000014085A040) ----------------------------------------------------
void __fastcall sub_14085A040(_QWORD** a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD** v4; // rdi
	_QWORD* v7; // rbx
	_QWORD** v9; // rsi
	__int64 v10; // rax

	v4 = a1 + 17;
	v7 = a1[17];
	v9 = a1 + 14;
	if (v7 != a1[18])
		goto LABEL_11;
	if (v4 != v9)
	{
		v7 = *v9;
		v4 = a1 + 14;
	}
	if (v7 != v4[1])
	{
	LABEL_11:
		while (1)
		{
			v10 = *(_QWORD*)(*v7 + 56i64);
			if (v10 && *(_WORD*)(v10 + 72))
				(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(*(_QWORD*)*v7 + 208i64))(*v7, a2, a3, a4);
			if (++v7 == v4[1])
			{
				if (v4 != v9)
				{
					v7 = *v9;
					v4 = v9;
				}
				if (v7 == v4[1])
					break;
			}
		}
	}
}

