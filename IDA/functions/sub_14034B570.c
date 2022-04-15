//----- (000000014034B570) ----------------------------------------------------
__int64 __fastcall sub_14034B570(__int64 a1, int* a2, int* a3, __int64 a4, unsigned int* a5)
{
	unsigned int* v6; // rax
	__int64 v8; // rbx
	int v9; // ebx
	__int64 v10; // rdx
	__int16 v11; // cx
	unsigned int* v12; // rax
	__int64 v13; // rax
	unsigned int v14; // ebx
	unsigned int* v15; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v17; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v18)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v19; // [rsp+48h] [rbp-20h]
	__int64 v20; // [rsp+70h] [rbp+8h] BYREF

	v20 = a1;
	if (a2)
	{
		while (*(_WORD*)a2 == 92 || *(_WORD*)a2 == 47)
			a2 = (int*)((char*)a2 + 2);
		v8 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v8;
			while (*((_WORD*)a2 + v8));
		}
		if ((unsigned int)v8 < 0x103)
		{
			sub_1407DB590(a3, a2, 2i64 * (unsigned int)v8);
			if (!(_DWORD)v8)
				goto LABEL_16;
			while (1)
			{
				v10 = (unsigned int)(v8 - 1);
				v11 = *((_WORD*)a3 + v10);
				if (v11 != 92 && v11 != 47)
					break;
				LODWORD(v8) = v8 - 1;
				*((_WORD*)a3 + v10) = 0;
				if (!(_DWORD)v10)
					goto LABEL_16;
			}
			if ((_DWORD)v8)
			{
				v13 = (unsigned int)v8;
				v14 = v8 + 1;
				*((_WORD*)a3 + v13) = 92;
				v15 = a5;
				*((_WORD*)a3 + v14) = 0;
				*v15 = v14;
			}
			else
			{
			LABEL_16:
				v12 = a5;
				*(_WORD*)a3 = 0;
				*v12 = 0;
			}
			return 0i64;
		}
		else
		{
			*(_QWORD*)&v17 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v17 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v18 = TlsValue;
			v20 = 0x141E5FCE0i64;
			v19 = v17;
			v9 = sub_140196F30(dword_140C8A670, 19, &v20, &v18);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v17 + 1));
			if (v9)
				DebugBreak();
			return 2147500037i64;
		}
	}
	else
	{
		v6 = a5;
		*(_WORD*)a3 = 0;
		*v6 = 0;
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A670: using guessed type _DWORD dword_140C8A670[2];

