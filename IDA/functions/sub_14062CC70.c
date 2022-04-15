//----- (000000014062CC70) ----------------------------------------------------
__int64 __fastcall sub_14062CC70(_QWORD* a1, __int64 a2, __int64 a3, double a4)
{
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rbx
	int v8; // eax
	float v9; // xmm0_4
	__int64 v10; // rax
	double v11; // xmm2_8
	void(__fastcall * **v12)(_QWORD, __int64); // rcx
	__int64 v13; // rcx
	__int64 v14; // rdx
	float v15; // [rsp+30h] [rbp+8h] BYREF
	__int64 v16; // [rsp+38h] [rbp+10h] BYREF

	v5 = a1[1];
	if (v5)
	{
		if (*(_DWORD*)(v5 + 724))
		{
			return sub_1405D31F0(v5, (_OWORD*)(*a1 + 32i64), (_OWORD*)(*a1 + 64i64));
		}
		else
		{
			v7 = qword_140C65898;
			v8 = *(_DWORD*)(qword_140C65898 + 29816);
			*(_DWORD*)(qword_140C65898 + 29696) = 3;
			*(_DWORD*)(v7 + 29812) = v8;
			v9 = (**(float(__fastcall***)(__int64))(v7 + 29704))(v7 + 29704);
			v10 = *(_QWORD*)(v7 + 29704);
			v15 = v9;
			(*(void(__fastcall**)(__int64, float*))(v10 + 8))(v7 + 29704, &v15);
			HIDWORD(v11) = 0;
			*(float*)&v11 = 1000.0 / (float)*(int*)(v7 + 29812);
			sub_1400F9C30(v7 + 29704, 0.0, *(float*)&v11);
			v12 = (void(__fastcall***)(_QWORD, __int64))a1[1];
			if (v12)
				(**v12)(v12, 1i64);
			v13 = qword_140C65898;
			v16 = 0i64;
			a1[1] = 0i64;
			LOBYTE(v16) = 3;
			sub_1403F4900(v13, 0x720u, (__int64)&v16);
			sub_1405CC9A0(*(_QWORD*)(qword_140C65898 + 29080), v14, v11, a4);
			result = qword_140C65898;
			*(_DWORD*)(qword_140C65898 + 31136) = 0;
		}
	}
	return result;
}
// 14062CD6B: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

