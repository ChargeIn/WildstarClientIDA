//----- (0000000140189A90) ----------------------------------------------------
int* __fastcall sub_140189A90(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v3; // rcx
	__int64 v5; // rsi
	SIZE_T v6; // rsi
	void* v7; // r15
	int v8; // ebx
	int v9; // ebx
	int v10; // ebx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rax
	unsigned __int64 v13; // rdx
	int* result; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-50h] BYREF
	__int128 v16; // [rsp+28h] [rbp-48h]
	__int64(__fastcall * *v17)(); // [rsp+40h] [rbp-30h] BYREF
	__int128 v18; // [rsp+48h] [rbp-28h]
	__int64 v19; // [rsp+90h] [rbp+20h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	if (8i64 * *(_QWORD*)(a1 + 24) + 8 > v3)
	{
		v5 = *(_QWORD*)(a1 + 8);
		if (v3 == v5)
		{
			if (v5)
				v6 = 2 * v5;
			else
				v6 = 16 * dwSize;
			v7 = VirtualAlloc(0i64, v6, 0x2000u, 4u);
			if (!v7)
			{
				TlsValue = &off_140B5E648;
				*(_QWORD*)&v16 = 0i64;
				*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v17 = TlsValue;
				v19 = 0x141D3A1D0i64;
				v18 = v16;
				v8 = sub_140197490(2, &v19, &v17);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
				if (v8)
					DebugBreak();
				sub_14018A160();
			}
			if (!VirtualAlloc(v7, *(_QWORD*)(a1 + 16) + dwSize, 0x1000u, 4u))
			{
				TlsValue = &off_140B5E648;
				*(_QWORD*)&v16 = 0i64;
				*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v17 = TlsValue;
				v19 = 0x141D3A620i64;
				v18 = v16;
				v9 = sub_140197490(2, &v19, &v17);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
				if (v9)
					DebugBreak();
				sub_14018A160();
			}
			sub_1407DB590((int*)v7, *(int**)a1, 8i64 * *(_QWORD*)(a1 + 24));
			if (*(_QWORD*)a1)
				VirtualFree(*(LPVOID*)a1, 0i64, 0x8000u);
			*(_QWORD*)a1 = v7;
			*(_QWORD*)(a1 + 8) = v6;
		}
		else if (!VirtualAlloc((LPVOID)(*(_QWORD*)a1 + v3), dwSize, 0x1000u, 4u))
		{
			*(_QWORD*)&v16 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = TlsValue;
			v19 = 0x141D3A508i64;
			v18 = v16;
			v10 = sub_140197490(2, &v19, &v17);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
			if (v10)
				DebugBreak();
			sub_14018A160();
		}
		*(_QWORD*)(a1 + 16) += dwSize;
	}
	v11 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = v11 + 1;
	if (v11)
	{
		do
		{
			v12 = (v11 - 1) >> 1;
			v13 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v12);
			if (v13 < a2)
				break;
			*(_QWORD*)(*(_QWORD*)a1 + 8 * v11) = v13;
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8 * v11) + 8i64) = v11;
			v11 = (v11 - 1) >> 1;
		} while (v12);
	}
	*(_QWORD*)(*(_QWORD*)a1 + 8 * v11) = a2;
	result = *(int**)a1;
	*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 8 * v11) + 8i64) = v11;
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

