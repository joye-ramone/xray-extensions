; � IDA ������ - ��� ���������� ����������� ������, � ����������, ��� dll ��������� �� �������� ������ ��
; ���������. ��� �� ������ ����� � ������������ ���������� org

; � MASM ��������� org ����� �������� �� ������ ������ ������. 
; ��� ����������� �������� ���������� ��������� ��������.

; ���������� ����������� ���������

; �������� ������ (�������� �� PeTool):
; ������� ����� ������� dll
b_addr TEXTEQU <10000000h>
; RVA ������ ������ (������ ����� 1000h)
sec1_rva TEXTEQU <1000h>
; RVA ������ ������
sec2_rva TEXTEQU <0060D000h>

; ��������� ��� ��������� ������ ����, ����������� ����������:
; ����������� ����� ������ ������ ������ ����� �������� + RVA ������
; � MASM ��������� org 0 ������������� ����� ������
sec1_addr EQU (b_addr + sec1_rva)
; ��������� ��� ������������ ������������ � ���������� org
shift EQU sec1_addr
; ����������� ����� ������ ������
sec2_addr EQU (b_addr + sec2_rva)
; �������� ����� ������� ������ � ������ ������ � ������� dll
sec1_sec2_dist EQU (sec2_rva - sec1_rva)
; ����� ����� ����� ����� ������� ������� ��������
; ��� ����� � ����� ������� �������� ����������� �������� ������������ ��������
; �� ��������� ������:
; org sec1_sec2_dist - 1
; db 0

; ������ ��� �������� ���������� �� IDA ��������� � ��������� org
; org <�������� ������ �� IDA> - shift
