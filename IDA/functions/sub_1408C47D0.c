//----- (00000001408C47D0) ----------------------------------------------------
__int64 __fastcall sub_1408C47D0(__int64 a1)
{
	__int64 result; // rax

	*(float*)(a1 + 112) = 1.0
		- (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 188i64) * 6.2831855)
			/ (float)*(int*)(a1 + 292));
	*(float*)(a1 + 124) = 1.0
		- (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 188i64) * 6.2831855)
			/ (float)*(int*)(a1 + 292));
	*(float*)(a1 + 136) = 1.0
		- (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 188i64) * 6.2831855)
			/ (float)*(int*)(a1 + 292));
	*(float*)(a1 + 148) = 1.0
		- (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 188i64) * 6.2831855)
			/ (float)*(int*)(a1 + 292));
	*(float*)(a1 + 160) = 1.0
		- (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 188i64) * 6.2831855)
			/ (float)*(int*)(a1 + 292));
	result = *(unsigned int*)(a1 + 292);
	*(float*)(a1 + 172) = 1.0
		- (float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 188i64) * 6.2831855) / (float)(int)result);
	return result;
}

