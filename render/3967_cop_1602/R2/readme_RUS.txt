��� �������:
  1) �������������� masm32 (www.masm32.com)
  2) ������� ���� � ����� � make_src_dll.bat
  3) ���������� make_src_dll.bat
  4) ������� xrRender_R2.dll � ����� R2
  5) ���������������� ��� ���������� � xrRender_R2_orig.dll
  6) ���������� patch_diff.bat
  7) ���������� patch.bat

�������� ������:
;=====��������� ��������� �����=======
   ����������� ����� ��������� ��������� ����� �� 250 �, ���������
   ���������� ������� ��� �� ����������� r__detail_radius.
   ����� 250 ����� �������� � console_comm.asm (����� 0F0h)

;=========���������� �������==========
   �������� ���������� �������:
   r__detail_radius

;==========��������� �����============
   �������� ����� ��������� ����� �� 0.02

;=============���� �����==============
   ���������� ����������������� ������� r2_sun_details - 
   ������ ����� ����� ����������� ����. �������� �����,
   �������� ������ �� �����������.

;====��������� ������������ �����====
   ������ ��������� �������� ������������ ����� (r__geometry_lod) �� 3,0

;=====�������� ������� (MIPBIAS)======
   ������ ��������� �������� ��������� �������� ������� (r2_tf_mipbias) �� [-3.0;3,0]

;=======���� �������� ������==========
   ������ � ���� ������ ����� ��������� �� ��������.

;========���� ��������� ����==========
   � ���� ������ ���� ��������� ���� ��������� � ��������������, ��� � ��.

;==�������������� ���������� ����� �����==
   ������ ��������� �������������� ���������� ���� ����� - 8192x8192.
   �����������, ���� ��� ���� 4096�4096.

;===����������� ����������� r2_sun_near===
   ����������� ������� ������ ����������� r2_sun_near �� 150. ��� ������� ��������
   �������� ����������� � ���������� ����� �����, ����� ����� ���������.