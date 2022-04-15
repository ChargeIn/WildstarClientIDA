//----- (000000014076EFF0) ----------------------------------------------------
void __fastcall sub_14076EFF0(__int64* a1)
{
	int v2; // ebx
	__int64* v3; // rcx
	__int64 v4; // rsi
	int v5; // ebp
	int v6; // edi
	_DWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	int v13; // [rsp+40h] [rbp+8h]

	v2 = 0;
	v3 = a1 + 4;
	*(v3 - 3) = 0i64;
	sub_1407765A0(v3);
	v4 = 0i64;
	if (a1[5])
	{
		v5 = v13;
		v6 = v13;
		while (1)
		{
			v7 = (_DWORD*)(a1[4] + 8 * v4);
			if (*v7 != v2 || v7[1] != v6 + 1)
				break;
			if (!v2)
				goto LABEL_9;
			++v6;
		LABEL_10:
			if (++v4 >= (unsigned __int64)a1[5])
			{
				if (v2)
				{
					v11 = 3 * sub_1407762D0(a1);
					v12 = *a1;
					*(_DWORD*)(v12 + 4 * v11) = v2;
					*(_DWORD*)(v12 + 4 * v11 + 4) = v5;
					*(_DWORD*)(v12 + 4 * v11 + 8) = v6;
				}
				return;
			}
		}
		if (v2)
		{
			v8 = 3 * sub_1407762D0(a1);
			v9 = *a1;
			*(_DWORD*)(v9 + 4 * v8) = v2;
			*(_DWORD*)(v9 + 4 * v8 + 4) = v5;
			*(_DWORD*)(v9 + 4 * v8 + 8) = v6;
		}
	LABEL_9:
		v10 = a1[4];
		v6 = *(_DWORD*)(v10 + 8 * v4 + 4);
		v2 = *(_DWORD*)(v10 + 8 * v4);
		v5 = v6;
		goto LABEL_10;
	}
}

