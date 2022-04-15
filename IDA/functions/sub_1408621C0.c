//----- (00000001408621C0) ----------------------------------------------------
_DWORD* __fastcall sub_1408621C0(_QWORD* a1, int a2, unsigned int a3)
{
	_DWORD* v5; // rbx
	_DWORD* v7; // rax
	_DWORD* v8; // rdx
	_DWORD* v9; // rax
	int v10; // ecx
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+58h] [rbp+20h] BYREF

	v5 = 0i64;
	v14 = 0i64;
	sub_14083ED20((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, (__int64)&v12, a3, (unsigned __int64*)&v14);
	if (v12)
	{
		v7 = (_DWORD*)*a1;
		v8 = (_DWORD*)a1[1];
		if ((_DWORD*)*a1 != v8)
		{
			do
			{
				if (*v7 == a2)
					break;
				v7 += 8;
			} while (v7 != v8);
			if (v7 != v8)
			{
				v5 = v7 + 2;
				if (v7 != (_DWORD*)-8i64)
					goto LABEL_10;
			}
		}
		v9 = (_DWORD*)sub_1408622A0((__int64)a1);
		if (v9)
		{
			*v9 = a2;
			v5 = v9 + 2;
		}
		if (!v5)
		{
			sub_1408420F0((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, a3);
			if (v14)
				sub_140841FE0(v14, 0);
		}
		else
		{
		LABEL_10:
			*(_QWORD*)v5 = v12;
			v10 = v13;
			v5[3] = a3;
			v5[2] = v10;
			*((_QWORD*)v5 + 2) = v14;
		}
	}
	return v5;
}
// 140C61B58: using guessed type __int64 qword_140C61B58;

