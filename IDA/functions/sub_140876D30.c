//----- (0000000140876D30) ----------------------------------------------------
__int64 __fastcall sub_140876D30(__int64 a1, int a2, __int64 a3, int a4)
{
	LPCRITICAL_SECTION v4; // r14
	__int64 LockSemaphore; // rdi
	__int64 v10; // rbx
	__int64 result; // rax
	__int64 v12; // rbx
	char v13; // cl
	char v14; // cl
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rdi
	int v18; // [rsp+20h] [rbp-48h] BYREF
	__int64 v19; // [rsp+28h] [rbp-40h]
	int v20; // [rsp+30h] [rbp-38h]
	int v21; // [rsp+34h] [rbp-34h]
	int v22; // [rsp+38h] [rbp-30h]
	char v23; // [rsp+3Ch] [rbp-2Ch]
	bool v24; // [rsp+3Dh] [rbp-2Bh]
	char v25; // [rsp+3Eh] [rbp-2Ah]

	v4 = qword_140C61BA8;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 11144));
	LockSemaphore = (__int64)v4[279].LockSemaphore;
	LODWORD(v10) = 0;
	if (LockSemaphore)
	{
		do
		{
		LABEL_6:
			sub_140839850(LockSemaphore, a2, a3);
			LockSemaphore = *(_QWORD*)(LockSemaphore + 16);
		} while (LockSemaphore);
		while (1)
		{
			v10 = (unsigned int)(v10 + 1);
			if ((unsigned int)v10 >= 0xC1)
				break;
			LockSemaphore = *((_QWORD*)&v4[279].LockSemaphore + v10);
			if (LockSemaphore)
				goto LABEL_6;
		}
	}
	else
	{
		while (1)
		{
			v10 = (unsigned int)(v10 + 1);
			if ((unsigned int)v10 >= 0xC1)
				break;
			LockSemaphore = *((_QWORD*)&v4[279].LockSemaphore + v10);
			if (LockSemaphore)
				goto LABEL_6;
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)((char*)v4 + 11144));
	result = sub_14085A9A0();
	v12 = result;
	if (result)
	{
		v13 = *(_BYTE*)(a1 + 88);
		v23 = 0;
		v18 = a2;
		v25 = v13;
		v14 = *(_BYTE*)(a1 + 62);
		v19 = a3;
		v20 = a4;
		v22 = v14 & 0x1F;
		v21 = sub_140855A70(a1);
		v15 = *(_QWORD*)v12;
		v24 = a3 == 0;
		(*(void(__fastcall**)(__int64, int*))(v15 + 128))(v12, &v18);
		v16 = sub_14086F180();
		v17 = v16;
		if (v16)
		{
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v16 + 128i64))(v16, &v18);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
		}
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	}
	return result;
}
// 140876D9C: conditional instruction was optimized away because rdi.8==0
// 140876DD2: conditional instruction was optimized away because rdi.8==0

