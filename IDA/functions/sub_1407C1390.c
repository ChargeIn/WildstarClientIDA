#include "../winhttp.h"

//----- (00000001407C1390) ----------------------------------------------------
__int64 __fastcall sub_1407C1390(__int64 a1, const __m128i* a2)
{
	__int64 v2; // rax
	unsigned int v4; // r9d
	__int64 v5; // rbx
	unsigned int v6; // r8d
	unsigned __int16* v7; // rax
	int v8; // ebx
	int v10; // edi
	int v11; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-19h] BYREF
	__int128 v13; // [rsp+38h] [rbp-11h]
	__int64 v14; // [rsp+50h] [rbp+7h] BYREF
	__int128 v15; // [rsp+58h] [rbp+Fh]
	__int64 v16; // [rsp+68h] [rbp+1Fh]
	int v17; // [rsp+70h] [rbp+27h]
	void(__fastcall * **v18)(_QWORD); // [rsp+B0h] [rbp+67h] BYREF
	__int64 v19; // [rsp+C0h] [rbp+77h] BYREF

	v2 = *(_QWORD*)(a1 + 16);
	v4 = *(_DWORD*)(v2 + 12);
	v5 = a1;
	v6 = 0;
	if (v4)
	{
		v7 = (unsigned __int16*)(*(_QWORD*)(v2 + 16) + 8i64);
		do
		{
			a1 = *v7;
			if ((_WORD)a1 == 130 || (_WORD)a1 == 128 && (v7[8] & 0x10) == 0)
				break;
			++v6;
			v7 += 20;
		} while (v6 < v4);
	}
	if (dword_140C66690)
	{
		*(_QWORD*)&v13 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = (__int64)TlsValue;
		v19 = 0x141E4E488i64;
		v15 = v13;
		v8 = sub_140197770(12, &v19, a2, &v14);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
		if (v8)
			DebugBreak();
		return 2147500037i64;
	}
	else
	{
		v10 = sub_1401B6DE0(a1, a2, (int**)(v5 + 32), (__int64)&v18, 0i64);
		if (v10 >= 0)
		{
			*((_QWORD*)&v15 + 1) = sub_1407C15C0;
			v14 = 0x100000004i64;
			*(_QWORD*)&v15 = v5;
			v16 = 0i64;
			v17 = 1;
			sub_14019DCA0((__int64)&v14, 0, v18, (int**)(v5 + 24));
			(*v18)[1](v18);
			return 0i64;
		}
		else
		{
			*(_QWORD*)&v13 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = (__int64)TlsValue;
			v19 = 0x141E4E508i64;
			v15 = v13;
			v11 = sub_140197770(12, &v19, a2, &v14);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
			if (v11)
				DebugBreak();
			return (unsigned int)v10;
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C66690: using guessed type int dword_140C66690;

