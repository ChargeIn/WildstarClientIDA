//----- (0000000140717560) ----------------------------------------------------
__int64 __fastcall sub_140717560(_QWORD* a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rax
	__int64* v5; // rax
	__int64 v6; // rax
	int v7; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v10; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v11)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+70h] [rbp+8h] BYREF
	__int64 v14; // [rsp+80h] [rbp+18h] BYREF

	if (*a1)
	{
		while (1)
		{
			v2 = a1[3];
			v3 = v2;
			v4 = *(_QWORD*)(v2 + 8);
			while (v4)
			{
				if (*(_DWORD*)(v4 + 32) < a2)
				{
					v4 = *(_QWORD*)(v4 + 24);
				}
				else
				{
					v3 = v4;
					v4 = *(_QWORD*)(v4 + 16);
				}
			}
			if (v3 == v2 || a2 < *(_DWORD*)(v3 + 32))
			{
				v14 = a1[3];
				v5 = &v14;
			}
			else
			{
				v13 = v3;
				v5 = &v13;
			}
			v6 = *v5;
			if (v6 != v2)
				return *(_QWORD*)(v6 + 40);
			a1 = (_QWORD*)a1[1];
			if (!a1)
				return 0i64;
			if (!*a1)
				goto LABEL_14;
		}
	}
	else
	{
	LABEL_14:
		*(_QWORD*)&v10 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v10 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v13 = 0x141E403D0i64;
		v12 = v10;
		v7 = sub_140196F30(&dword_140C8B114, 40, &v13, &v11);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v10 + 1));
		if (v7)
			DebugBreak();
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B114: using guessed type _DWORD dword_140C8B114;

