//----- (000000014053B770) ----------------------------------------------------
__int64 __fastcall sub_14053B770(__int64 a1, int a2)
{
	int v3; // edx
	int v4; // edx
	float v5; // xmm0_4
	__int64 v6; // rax
	__int64 result; // rax
	__int64* v8; // rcx
	int v9; // eax
	__int64 v10; // rax
	float v11; // xmm0_4
	__int64 v12; // rax
	__int64* v13; // rcx
	__int64 v14; // rax
	int v15; // [rsp+40h] [rbp+8h] BYREF
	float v16; // [rsp+48h] [rbp+10h] BYREF
	float v17; // [rsp+50h] [rbp+18h] BYREF
	int v18; // [rsp+58h] [rbp+20h] BYREF

	*(_DWORD*)(a1 + 29696) = a2;
	if (a2)
	{
		v3 = a2 - 1;
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				if (v4 == 1)
				{
					v5 = (**(float(__fastcall***)(__int64))(a1 + 29704))(a1 + 29704);
					v6 = *(_QWORD*)(a1 + 29704);
					v16 = v5;
					(*(void(__fastcall**)(__int64, float*))(v6 + 8))(a1 + 29704, &v16);
					return sub_1400F9C30(a1 + 29704, 0.0, 1000.0 / (float)*(int*)(a1 + 29812));
				}
			}
			else
			{
				v8 = (__int64*)(a1 + 29704);
				if (*((float*)v8 + 6) != 1.0 || (float)0.0 != *((float*)v8 + 7))
				{
					v9 = dword_140C636A8;
					v8[3] = 1065353216i64;
					*((_DWORD*)v8 + 4) = 1065353216;
					*((_DWORD*)v8 + 2) = v9;
				}
				v10 = *v8;
				v15 = 1065353216;
				result = (*(__int64(__fastcall**)(__int64*, int*))(v10 + 8))(v8, &v15);
				*(_DWORD*)(a1 + 29780) = dword_140C636A8 + *(_DWORD*)(a1 + 29808);
			}
		}
		else
		{
			sub_1400F9C30(a1 + 29704, 1.0, 1000.0 / (float)*(int*)(a1 + 29812));
			v11 = (**(float(__fastcall***)(__int64))(a1 + 29704))(a1 + 29704);
			v12 = *(_QWORD*)(a1 + 29704);
			v17 = v11;
			return (*(__int64(__fastcall**)(__int64, float*))(v12 + 8))(a1 + 29704, &v17);
		}
	}
	else
	{
		v13 = (__int64*)(a1 + 29704);
		if (*((float*)v13 + 6) != 0.0 || (float)0.0 != *((float*)v13 + 7))
		{
			v13[3] = 0i64;
			*((_DWORD*)v13 + 4) = 0;
			*((_DWORD*)v13 + 2) = dword_140C636A8;
		}
		v14 = *v13;
		v18 = 0;
		return (*(__int64(__fastcall**)(__int64*, int*))(v14 + 8))(v13, &v18);
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

