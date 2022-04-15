//----- (000000014062A3D0) ----------------------------------------------------
__int64 __fastcall sub_14062A3D0(_QWORD* a1, __int64 a2)
{
	__int64 i; // rbx
	__int64 v5; // rax
	unsigned __int64 v6; // r10
	_QWORD* v7; // rdi
	unsigned __int64 v8; // rsi
	__int64 v9; // r11
	unsigned __int64 v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rax
	unsigned __int64 v13; // r9
	__int64 v14; // rdx

	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
	{
		v5 = *(_QWORD*)(a2 + 8);
		v6 = *(_QWORD*)(v5 + 8 * i);
		v7 = (_QWORD*)(v5 + 8 * i);
		if (!v6)
			goto LABEL_14;
		v8 = a1[5];
		v9 = a1[4];
		v10 = 0i64;
		v11 = v8;
		while (v10 < v11)
		{
			v12 = v10 + ((v11 - v10) >> 1);
			v13 = *(_QWORD*)(*(_QWORD*)(v9 + 8 * v12) + 8i64);
			if (v6 < v13)
			{
				v10 = v12 + 1;
			}
			else
			{
				if (v6 <= v13)
					goto LABEL_10;
				v11 = v10 + ((v11 - v10) >> 1);
			}
		}
		v12 = v10;
	LABEL_10:
		if (v12 != v8 && (v14 = *(_QWORD*)(v9 + 8 * v12), *(_QWORD*)(v14 + 8) == v6) && v14)
			sub_140430AA0(*(_QWORD*)(qword_140C65898 + 29504), v14);
		else
			LABEL_14 :
			sub_140033260(a1 + 7, v7);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

