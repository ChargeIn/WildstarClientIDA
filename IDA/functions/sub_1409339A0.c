#include "../winhttp.h"

//----- (00000001409339A0) ----------------------------------------------------
unsigned __int64* __fastcall sub_1409339A0(unsigned __int64 a1)
{
	struct _SECURITY_ATTRIBUTES* MutexA; // r8
	unsigned __int64* v3; // rbx
	unsigned __int64 v4; // rdi
	unsigned __int64* v5; // rax
	unsigned __int64* v6; // rsi
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rdx
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rbx
	__int64 v13; // rcx
	_QWORD* v14; // rax
	_QWORD* v15; // rcx

	if (hMutex)
	{
		WaitForSingleObject(hMutex, 0xFFFFFFFF);
		MutexA = hMutex;
	}
	else
	{
		MutexA = (struct _SECURITY_ATTRIBUTES*)CreateMutexA(hMutex, (int)hMutex + 1, 0i64);
		hMutex = MutexA;
	}
	v3 = (unsigned __int64*)qword_140C63560;
	if (a1 < 0x28)
		a1 = 40i64;
	v4 = (a1 + 23) & 0xFFFFFFFFFFFFFFF8ui64;
	if (qword_140C63560)
	{
		while (v3[4] < v4)
		{
			v3 = (unsigned __int64*)v3[2];
			if (!v3)
				goto LABEL_9;
		}
		v8 = v3[4];
		if (v8 <= v4 + 64)
		{
			v10 = v3[2];
			if (v10)
				*(_QWORD*)(v10 + 24) = v3[3];
			v11 = v3[3];
			if (v11)
				*(_QWORD*)(v11 + 16) = v3[2];
			else
				qword_140C63560 = v3[2];
			v4 = v8;
		}
		else
		{
			v9 = v8 - v4;
			v3[4] = v9;
			v3 = (unsigned __int64*)((char*)v3 + v9);
			v3[1] = v9;
			*(unsigned __int64*)((char*)v3 + v4 + 8) = v4;
		}
		qword_140C63568 += v4;
		*v3 = v4;
		ReleaseMutex(MutexA);
		return v3 + 2;
	}
	else
	{
	LABEL_9:
		v5 = (unsigned __int64*)VirtualAlloc(0i64, (v4 + 65551) & 0xFFFFFFFFFFFF0000ui64, 0x3000u, 0x40u);
		v6 = v5;
		if (v5)
		{
			v12 = ((v4 + 65551) & 0xFFFFFFFFFFFF0000ui64) - 16;
			qword_140C63570 += v12;
			v5[1] = 0i64;
			if (v12 <= v4 + 64)
			{
				qword_140C63568 += v12;
				*v5 = v12;
				v15 = (unsigned __int64*)((char*)v5 + v12);
			}
			else
			{
				v13 = qword_140C63560;
				qword_140C63568 += v4;
				v14 = (unsigned __int64*)((char*)v5 + v4);
				*v6 = v4;
				v12 -= v4;
				v14[1] = v4;
				*v14 = 0i64;
				v14[2] = v13;
				v14[3] = 0i64;
				v14[4] = v12;
				if (v13)
					*(_QWORD*)(v13 + 24) = v14;
				qword_140C63560 = (__int64)v6 + v4;
				v15 = (_QWORD*)((char*)v14 + v12);
			}
			*v15 = 1i64;
			v15[1] = v12;
			ReleaseMutex(hMutex);
			return v6 + 2;
		}
		else
		{
			ReleaseMutex(hMutex);
			return 0i64;
		}
	}
}
// 140C63560: using guessed type __int64 qword_140C63560;
// 140C63568: using guessed type __int64 qword_140C63568;
// 140C63570: using guessed type __int64 qword_140C63570;

