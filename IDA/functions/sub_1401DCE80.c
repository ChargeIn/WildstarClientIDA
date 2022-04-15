//----- (00000001401DCE80) ----------------------------------------------------
__int64 __fastcall sub_1401DCE80(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	_QWORD* v5; // rdi
	unsigned __int64 v6; // rbx
	__int64 v7; // rax
	int v8; // ecx
	float v9; // xmm0_4
	__int64 v10; // rcx
	float v11; // xmm0_4
	__int64 v12; // rax
	int v13; // ecx
	float v14; // xmm1_4
	__int64 v15; // rcx
	float v16; // xmm0_4
	__int64 v17; // rax
	int v18; // ecx
	float v19; // xmm0_4
	__int64 v20; // rcx
	float v21; // xmm0_4
	__int64 v22; // rax
	int v23; // ecx
	float v24; // xmm0_4

	if (*(_DWORD*)(a1 + 12))
		return 1i64;
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
	if ((_DWORD)result)
	{
		v5 = (_QWORD*)(a1 + 32);
		v6 = 0i64;
		while ((*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v5 + 32i64))(*v5, a2))
		{
			++v6;
			++v5;
			if (v6 >= 4)
			{
				v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 24i64))(*(_QWORD*)(a1 + 32));
				v8 = *(_DWORD*)(v7 + 4);
				*(_DWORD*)(a1 + 116) = 0;
				v9 = (float)v8;
				v10 = *(_QWORD*)(a1 + 40);
				*(float*)(a1 + 112) = 255.0 / v9;
				v11 = (float)*(int*)(v7 + 8);
				*(float*)(a1 + 176) = 1.0 / v11;
				*(float*)(a1 + 180) = (float)(1.0 / v11) * 0.5;
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
				v13 = *(_DWORD*)(v12 + 4);
				*(_DWORD*)(a1 + 132) = 0;
				v14 = (float)v13;
				v15 = *(_QWORD*)(a1 + 48);
				*(float*)(a1 + 128) = 85.0 / v14;
				v16 = (float)*(int*)(v12 + 8);
				*(float*)(a1 + 192) = 1.0 / v16;
				*(float*)(a1 + 196) = (float)(1.0 / v16) * 0.5;
				v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 24i64))(v15);
				v18 = *(_DWORD*)(v17 + 4);
				*(_DWORD*)(a1 + 148) = 0;
				v19 = (float)v18;
				v20 = *(_QWORD*)(a1 + 56);
				*(float*)(a1 + 144) = 85.0 / v19;
				v21 = (float)*(int*)(v17 + 8);
				*(float*)(a1 + 208) = 1.0 / v21;
				*(float*)(a1 + 212) = (float)(1.0 / v21) * 0.5;
				v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20);
				v23 = *(_DWORD*)(v22 + 4);
				*(_DWORD*)(a1 + 164) = 0;
				*(float*)(a1 + 160) = 85.0 / (float)v23;
				v24 = (float)*(int*)(v22 + 8);
				result = 1i64;
				*(float*)(a1 + 224) = 1.0 / v24;
				*(float*)(a1 + 228) = (float)(1.0 / v24) * 0.5;
				*(_DWORD*)(a1 + 12) = 1;
				return result;
			}
		}
		return 0i64;
	}
	return result;
}

